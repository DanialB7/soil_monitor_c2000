// Filename:            SoilMonitor_main.c
//
// Description:         This file has a main, timer, HWI, SWI, TSK and idle function for SYS/BIOS application.
//
// Target:              TMS320F28379D
//
// Author:              Ken Huynh & Danial Bozorgtar
// 
// Date:                Nov. 20, 2023

//defines:
#define xdc__strict //suppress typedef warnings
#define VREFHI 3.0 //reference voltage for capacitive soil moisture sensor
#define DHT20_ADDRESS 0x38 // address for I2C temperature and humidity sensor
#define BUFFER_SIZE 64 // set circular buffer size 
#define WATER_LEVEL 14.5 //set the lowest water level for tank in cm

//includes:
#include <xdc/std.h>
#include <stdint.h>
#include <stdio.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Error.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <xdc/runtime/Timestamp.h>
#include <ti/sysbios/knl/Clock.h>
#include "i2c_driver.h"
#include "ultrasonic.h"
#include "28379D_uart.h"
#include <Headers/F2837xD_device.h>

//Swi handle defined in .cfg file:
extern const Swi_Handle Swi0;
extern const Swi_Handle Swi1;

//Task handle defined in .cfg File:
extern const Task_Handle Tsk0;
extern const Task_Handle Tsk1;
extern const Task_Handle Tsk2;

//Semaphore handle defined in .cfg File:
extern const Semaphore_Handle mySem; //initialize semaphore
extern const Semaphore_Handle mySem1;
extern const Semaphore_Handle mySem2;

//function prototypes:
extern void DeviceInit(void);

//declare global variables:
volatile Bool isrFlag = FALSE; //flag used by idle function
volatile Bool isrFlag1 = FALSE; //flag used by swi and tsk to stop if water level is below a certain threshold
volatile UInt16 tickCount = 0; //counter incremented by timer interrupt
int once = 0;
int init = 0;
//sensor variables
float moisture_voltage_reading; //for Hwi KH
float water_content;
float humidity;
float temperature;
//buffer variables
float temperature_buffer [BUFFER_SIZE] = {0}; //Initialize buffer and set all elements to 0 //DB
int counter_buffer= 0;
float sum = 0;
int num_samples = 0;
float movingAverage;
//distance &ecap 
float distance;
unsigned long int  ECAP_data;
int count;
//elapsed time measurement for each thread
uint32_t  elapsedTimei2c;
uint32_t  elapsedTimeultra;
uint32_t  elapsedTimeuart;
uint32_t  elapsedTimeidle;
uint32_t  elapsedTimeswi;
uint32_t  elapsedTimehwi;
/* ======== main ======== */
Int main()
{ 
    //initialization
    DeviceInit(); //initialize processor  
    start_i2c(); // initialize the I2C module //KH
    uart_init(115200UL); // initialize UART module //KH
    //jump to RTOS (does not return):
    BIOS_start();
    return(0);
}
/* ======== ECAP_ISR ======== */ 
//HWI configured ISR function as a result of eCAP interrupt on ultrasonic ECHO pin output
//Collects time data captured in the corresponding register and clears all the flags
Void ECAP_ISR(UArg arg) //DB
{
ECAP_data = ECap1Regs.CAP2; // Set register values to a global variable 
ECap1Regs.ECCLR.all = 0xFF; // Clear all flags
}

/* ======== myTickFxn ======== */
//Timer tick function that increments a counter, sets the isrFlag and posts sempahores
//Entered 
Void myTickFxn(UArg arg)
{
    tickCount++; //increment the tick counter
    if(tickCount % 10000 == 0) { //changed to 100 times a second //DB
        Semaphore_post(mySem);   // post I2C task //DB
        isrFlag = TRUE; //tell idle thread to blink LED 100 times a second
    }
    if (init == 0) // to post task 1 and 2 once upon start up //DB
    {
        Semaphore_post(mySem2);
        Semaphore_post(mySem1);
        init = 1;
    }
}

/* ======== myIdleFxn ======== */
//Idle function that is called repeatedly from RTOS 
Void myIdleFxn(Void)
{
    uint32_t startTime;
    uint32_t endTime;
    startTime = Timestamp_get32(); // get start time stamp to measure idle //DB
   if(isrFlag == TRUE) {
       isrFlag = FALSE;  //reset flag 
       GpioDataRegs.GPATOGGLE.bit.GPIO31 = 1;  //toggle blue LED:
   }
   endTime = Timestamp_get32(); // get stop time stamp //DB
   elapsedTimeidle = endTime - startTime; // measure elapsed time //DB
}

/* ========= myHwi ========== */
//Hwi function that is called by the attached hardware devices e.g ADC 
Void myHwi(Void) //KH
{
    uint32_t startTime;
    uint32_t endTime;
    startTime = Timestamp_get32(); // get start time stamp to measure HWI //DB
    //read ADC value from temperature sensor:
    moisture_voltage_reading = ((VREFHI/4095)*AdcaResultRegs.ADCRESULT0); //get reading and scale reference voltage //KH
    AdcaRegs.ADCINTFLGCLR.bit.ADCINT1 = 1; //clear interrupt flag //KH
    Swi_post(Swi0); // post SWI to process data //KH
    endTime = Timestamp_get32();
    elapsedTimehwi = endTime - startTime; // get total time elapsed for HWI //DB

}
/* ========= mySwiFxn ========== */
//SWI function that gets posted by Hwi to process capacitive soil moisture data
Void mySwiFxn(Void) //KH
{
      uint32_t startTime;
      uint32_t endTime;
      startTime = Timestamp_get32(); // get start time stamp to measure SWI //DB
       //converting voltage reading of adc to water content in soil
       water_content =(((1/moisture_voltage_reading)*2.48) - 0.72)*100; //KH
       if ((water_content < 30) && (isrFlag1 == FALSE)) // logic to start or stop motor depnding on moisture level and tank level //DB
       {
           GpioDataRegs.GPASET.bit.GPIO22 = 1; // turn on motor

       }
       else
       {
           GpioDataRegs.GPACLEAR.bit.GPIO22 = 1; // turn off motor
       }
       endTime = Timestamp_get32();
       elapsedTimeswi = endTime - startTime; // measured time elapsed for SWI //DB
}


/* ========= myTskFxn1 ========== */
//Tsk1 function that is posted from TSK 0 to interface with UART ESP32 //KH
Void myTskFxn2(Void) //KH
{
    while (TRUE) {
        Semaphore_pend(mySem2, BIOS_WAIT_FOREVER); // wait for semaphore to be posted
        uint32_t startTime;
        uint32_t endTime;
        startTime = Timestamp_get32(); // collect start time stamp to measure TSK2 //DB
        char str[50]; // store data //KH
        sprintf(str,"Temp: %.3f Hum: %.3f\n", movingAverage,humidity); // convert char to string to transmit //KH
        // Transmit the string over UART
        uart_tx_str(str); //transmit string data through UART //KH
        endTime = Timestamp_get32();
        elapsedTimeuart = endTime - startTime; // collect total time elapsed from for TSK 2 //DB
    }
}


/* ========= myTskFxn ========== */
//Tsk function that is called to interface with I2C to collect Temp/Humidity data and DSP 
Void myTskFxn(Void)
{
    while (TRUE) {
        Semaphore_pend(mySem, BIOS_WAIT_FOREVER); // wait for semaphore to be posted from timer0 
        uint32_t startTime; 
        uint32_t endTime;
        UInt8 status; //variable to collect status from sensor //DB
        UInt8 status_cmd = 0x71; //sending 0x71 as per datasheet to get status of sensor //DB
        startTime = Timestamp_get32(); // collect start time stamp to measure TSK 0 
        // Step 1: Check sensor status once to initialize sensor //DB
        if (once == 0){
        i2c_master_transmit(DHT20_ADDRESS, &status_cmd, 1);
        Task_sleep(20); // Short delay for transmission to complete
        i2c_master_receive(DHT20_ADDRESS, &status, 1);
        Task_sleep(20); // Short delay for reception to complete
        once = 1;
        }
        // Step 2: Initialize sensor if not correctly setup internally //DB

        if (status != 0x18) {
            resetRegister(0x1B);
            resetRegister(0x1C);
            resetRegister(0x1E);
            Task_sleep(20); // Allow time for command
            }

       // Step 3: Send measurement command to gather data

       UInt8 measure_cmd = 0xAC; //send measurement command as per datasheet //DB
       i2c_master_transmit(DHT20_ADDRESS, &measure_cmd, 1); 
       Task_sleep(80); // Wait for measurement to complete (as per data sheet)

       // Step 4: Read sensor data

       UInt8 data_rx[6]; // Array to store 6 bytes of data received from sensor
       i2c_master_receive(DHT20_ADDRESS, data_rx, 6);
       Task_sleep(20); // Short delay after reading data

       // Extracting humidity from data_rx //DB

       UInt32 upsizing = data_rx[1];
       UInt32 SRH = (upsizing << 12) | (data_rx[2] << 4) | (data_rx[3] >> 4);
       humidity = ((float)SRH / 1048576) * 100.0;

       // Extracting temperature from data_rx //DB

       UInt32 upsized = data_rx[3]; // converting UInt16 to UInt 32 to shift without data loss
       UInt32 ST = ((upsized & 0x0F) << 16) | (data_rx[4] << 8) | data_rx[5];
       temperature = ((float)ST / 1048576) * 200.0 - 50.0;

       // storing values in circular buffer called temperature_buffer and implementing moving average filter //DB
       // Subtract the oldest temperature from the sum if buffer is full //DB
       if (num_samples == BUFFER_SIZE) {
           sum -= temperature_buffer[counter_buffer];
       }

       // Add new temperature to buffer
       temperature_buffer[counter_buffer] = temperature;

       // Add new temperature to sum
       sum += temperature;

       // Increment counter and wrap around if needed
       counter_buffer = (counter_buffer + 1) % BUFFER_SIZE;

       // Increment number of samples until the buffer is first filled
       if (num_samples < BUFFER_SIZE) {
           num_samples++;
       }
       // Calculate moving average
       movingAverage = sum / (float)num_samples;
       Semaphore_post(mySem2);
       Semaphore_post(mySem);
       endTime = Timestamp_get32();
       elapsedTimei2c = endTime - startTime; // collect total elapsed time of TSK 0 //DB
    }
}
/* ========= myTskFxn1 ========== */
//Tsk1 function that is called to interface with ultrasonic sensor and process results //DB
Void myTskFxn1(Void) //DB
{
    while (TRUE) {
        uint32_t startTime; 
        uint32_t endTime;
        startTime = Timestamp_get32(); // collect start time stamp to measure TSK1 //DB
        // Set trigger pin high
        GpioDataRegs.GPBSET.bit.GPIO52 = 1;
        // Delay for 10 Us
        Task_sleep(10);
        // Set trigger pin low
        GpioDataRegs.GPBCLEAR.bit.GPIO52 = 1;

        // distance calculated based on time and speed of sound
        Semaphore_pend(mySem1, BIOS_WAIT_FOREVER); // wait for semaphore to be posted
        distance = calculateDistance(ECAP_data); // calculate distance using data collected from eCAP
        Semaphore_post(mySem1);

        // check distance of water level to see if its within threshold
        if (distance > WATER_LEVEL)
        {
            isrFlag1 = TRUE;
        }
        else
        {
            isrFlag1 = FALSE;
        }
        endTime = Timestamp_get32();
        elapsedTimeultra = endTime - startTime; // collect total time elapsed for TSK 1
    }
}
