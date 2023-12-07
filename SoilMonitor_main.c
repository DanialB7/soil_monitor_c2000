// Filename:            SoilMonitor_main.c
//
// Description:         This file has a main, timer, HWI, SWI, TSK and idle function for SYS/BIOS application.
//
// Target:              TMS320F28379D
//
// Author:              Ken & Danial
//
// Date:                Nov. 20, 2023

//defines:
#define xdc__strict //suppress typedef warnings

#define VREFHI 3.0 //reference voltage for capacitive soil moisture sensor
#define DHT20_ADDRESS 0x38 // address for I2C temperature and humidity sensor
#define BUFFER_SIZE 64
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
float distance;
unsigned long int  ECAP_data;
int count;
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
    start_i2c(); // initialize the i2
    uart_init(115200UL);
    //jump to RTOS (does not return):
    BIOS_start();
    return(0);
}
/* ======== ECAP_ISR ======== */
//HWI configured ISR function as a result of eCAP interrupt on ultrasonic ECHO pin output
//Collects time data captured in the corresponding register and clears all the flags
Void ECAP_ISR(UArg arg)
{
ECAP_data = ECap1Regs.CAP2;
ECap1Regs.ECCLR.all = 0xFF; // Clear flag
}

/* ======== myTickFxn ======== */
//Timer tick function that increments a counter and sets the isrFlag
//Entered 100 times per second if PLL and Timer set up correctly
Void myTickFxn(UArg arg)
{
    tickCount++; //increment the tick counter
    if(tickCount % 10000 == 0) { //DB changed to 100000 to update every 10ms
        Semaphore_post(mySem);
        isrFlag = TRUE; //tell idle thread to do something 20 times per second
    }
    if (init == 0)
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
    startTime = Timestamp_get32();
   if(isrFlag == TRUE) {
       isrFlag = FALSE;
       GpioDataRegs.GPATOGGLE.bit.GPIO31 = 1;  //toggle blue LED:
   }
   endTime = Timestamp_get32();
   elapsedTimeidle = endTime - startTime;
}

/* ========= myHwi ========== */
//Hwi function that is called by the attached hardware devices e.g ADC
Void myHwi(Void)
{
    uint32_t startTime;
    uint32_t endTime;
    startTime = Timestamp_get32();
    //read ADC value from temperature sensor:
    moisture_voltage_reading = ((VREFHI/4095)*AdcaResultRegs.ADCRESULT0); //get reading and scale reference voltage
    AdcaRegs.ADCINTFLGCLR.bit.ADCINT1 = 1; //clear interrupt flag
    Swi_post(Swi0); // post SWI to process data
    endTime = Timestamp_get32();
    elapsedTimehwi = endTime - startTime;

}
/* ========= mySwiFxn ========== */
//SWI function that gets posted by Hwi to process capacitive soil moisture data
Void mySwiFxn(Void)
{
      uint32_t startTime;
      uint32_t endTime;
      startTime = Timestamp_get32();
       //converting voltage reading of adc to water content in soil
       water_content =(((1/moisture_voltage_reading)*2.48) - 0.72)*100;
       if ((water_content < 30) && (isrFlag1 == FALSE))
       {
           GpioDataRegs.GPASET.bit.GPIO22 = 1;

       }
       else
       {
           GpioDataRegs.GPACLEAR.bit.GPIO22 = 1;
       }
       endTime = Timestamp_get32();
       elapsedTimeswi = endTime - startTime;
}


/* ========= myTskFxn1 ========== */
//Tsk1 function that is called to interface with UART ESP32
Void myTskFxn2(Void)
{
    while (TRUE) {
        Semaphore_pend(mySem2, BIOS_WAIT_FOREVER); // wait for semaphore to be posted
        uint32_t startTime;
        uint32_t endTime;
        startTime = Timestamp_get32();
        char str[50];
        sprintf(str,"Temp: %.3f Hum: %.3f\n", movingAverage,humidity);
        // Transmit the string over UART
        uart_tx_str(str);
        endTime = Timestamp_get32();
        elapsedTimeuart = endTime - startTime;
    }
}


/* ========= myTskFxn ========== */
//Tsk function that is called to interface with I2C Temp/Humidity and process results
Void myTskFxn(Void)
{
    while (TRUE) {
        Semaphore_pend(mySem, BIOS_WAIT_FOREVER); // wait for semaphore to be posted
        // Step 1: Check sensor status
        uint32_t startTime;
        uint32_t endTime;
        UInt8 status;
        UInt8 status_cmd = 0x71;
        startTime = Timestamp_get32();
        if (once == 0){
        i2c_master_transmit(DHT20_ADDRESS, &status_cmd, 1);
        Task_sleep(20); // Short delay for transmission to complete
        i2c_master_receive(DHT20_ADDRESS, &status, 1);
        Task_sleep(20); // Short delay for reception to complete
        once = 1;
        }
        // Step 2: Initialize sensor if not correctly setup

        if (status != 0x18) {
            resetRegister(0x1B);
            resetRegister(0x1C);
            resetRegister(0x1E);
            Task_sleep(20); // Allow time for command
            }

       // Step 3: Send measurement command to gather data

       UInt8 measure_cmd = 0xAC;
       i2c_master_transmit(DHT20_ADDRESS, &measure_cmd, 1);
       Task_sleep(80); // Wait for measurement to complete (as per data sheet)

       // Step 4: Read sensor data

       UInt8 data_rx[6]; // Array to store 6 bytes of data
       i2c_master_receive(DHT20_ADDRESS, data_rx, 6);
       Task_sleep(20); // Short delay after reading data


       // Extracting humidity

       UInt32 upsizing = data_rx[1];
       UInt32 SRH = (upsizing << 12) | (data_rx[2] << 4) | (data_rx[3] >> 4);
       humidity = ((float)SRH / 1048576) * 100.0;

       // Extracting temperature

       UInt32 upsized = data_rx[3]; // converting UInt16 to UInt 32 to shift without data loss
       UInt32 ST = ((upsized & 0x0F) << 16) | (data_rx[4] << 8) | data_rx[5];
       temperature = ((float)ST / 1048576) * 200.0 - 50.0;

       //////////////////////////////////////////////////////////
       // storing values in circular buffer called temperature_buffer and implementing moving average filter
       // Subtract the oldest temperature from the sum if buffer is full
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
       elapsedTimei2c = endTime - startTime;
    }
}
/* ========= myTskFxn1 ========== */
//Tsk1 function that is called to interface with ultrasonic sensor and process results
Void myTskFxn1(Void)
{
    while (TRUE) {
        uint32_t startTime;
        uint32_t endTime;
        startTime = Timestamp_get32();
        // Set trigger pin high
        GpioDataRegs.GPBSET.bit.GPIO52 = 1;
        // Delay for 10 Us
        Task_sleep(10);
        // Set trigger pin low
        GpioDataRegs.GPBCLEAR.bit.GPIO52 = 1;

        // distance calculated based on time and speed of sound
        Semaphore_pend(mySem1, BIOS_WAIT_FOREVER); // wait for semaphore to be posted
        distance = calculateDistance(ECAP_data);
        Semaphore_post(mySem1);

        // check distance to see if its within threshold
        if (distance > WATER_LEVEL)
        {
            isrFlag1 = TRUE;
        }
        else
        {
            isrFlag1 = FALSE;
        }
        endTime = Timestamp_get32();
        elapsedTimeultra = endTime - startTime;
    }
}
