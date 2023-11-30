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

//includes:
#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Error.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Clock.h>
#include "i2c_driver.h"
#include "ultrasonic.h"

#include <Headers/F2837xD_device.h>

//Swi handle defined in .cfg file:
extern const Swi_Handle Swi0;
extern const Swi_Handle Swi1;

//Task handle defined in .cfg File:
extern const Task_Handle Tsk0;
extern const Task_Handle Tsk1;

//Semaphore handle defined in .cfg File:
extern const Semaphore_Handle mySem;
extern const Semaphore_Handle mySem1;

//function prototypes:
extern void DeviceInit(void);


//declare global variables:
volatile Bool isrFlag = FALSE; //flag used by idle function
volatile UInt16 tickCount = 0; //counter incremented by timer interrupt

float moisture_voltage_reading; //for Hwi KH
float water_content;
float humidity;
float temperature;
float distance;


/* ======== main ======== */
Int main()
{ 
    //initialization

    DeviceInit(); //initialize processor
    start_i2c(); // initialize the i2c

    //jump to RTOS (does not return):

    BIOS_start();
    return(0);
}

/* ======== myTickFxn ======== */
//Timer tick function that increments a counter and sets the isrFlag
//Entered 100 times per second if PLL and Timer set up correctly
Void myTickFxn(UArg arg)
{
    tickCount++; //increment the tick counter
    if(tickCount % 100000 == 0) { //DB changed to 100000 to update every 10ms
        isrFlag = TRUE; //tell idle thread to do something 20 times per second
        Semaphore_post(mySem);
        Semaphore_post(mySem1);
    }
}

/* ======== myIdleFxn ======== */
//Idle function that is called repeatedly from RTOS
Void myIdleFxn(Void)
{
   if(isrFlag == TRUE) {
       isrFlag = FALSE;
       GpioDataRegs.GPATOGGLE.bit.GPIO31 = 1;  //toggle blue LED:
   }
}

/* ========= myHwi ========== */
//Hwi function that is called by the attached hardware devices e.g ADC
Void myHwi(Void)
{
    //read ADC value from temperature sensor:
    moisture_voltage_reading = ((VREFHI/4095)*AdcaResultRegs.ADCRESULT0); //get reading and scale reference voltage
    AdcaRegs.ADCINTFLGCLR.bit.ADCINT1 = 1; //clear interrupt flag
    Swi_post(Swi0); // post SWI to process data
}
/* ========= mySwiFxn ========== */
//SWI function that gets posted by Hwi to process capacitive soil moisture data
Void mySwiFxn(Void)
{
       //converting voltage reading of adc to water content in soil
       water_content =(((1/moisture_voltage_reading)*2.48) - 0.72)*100;

}

/* ========= myTskFxn ========== */
//Tsk function that is called to interface with I2C Temp/Humidity and process results
Void myTskFxn(Void)
{
    while (TRUE) {
        Semaphore_pend(mySem, BIOS_WAIT_FOREVER); // wait for semaphore to be posted
        // Step 1: Check sensor status

        int once = 0;
        UInt8 status;
        UInt8 status_cmd = 0x71;
        int i;
        if (once == 0){
        i2c_master_transmit(DHT20_ADDRESS, &status_cmd, 1);
        Task_sleep(20); // Short delay for transmission to complete
        i2c_master_receive(DHT20_ADDRESS, &status, 1);
        Task_sleep(20); // Short delay for reception to complete
        once = 1;
        }
        // Step 2: Initialize sensor if not correctly setup

        if (status != 0x18) {
        UInt8 init_cmds[] = {0x1B, 0x1C, 0x1E};
        for (i = 0; i < sizeof(init_cmds); i++) {
            i2c_master_transmit(DHT20_ADDRESS, &init_cmds[i], 1);
            Task_sleep(20); // Allow time for each command
            }
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
    }
}
/* ========= myTskFxn1 ========== */
//Tsk1 function that is called to interface with ultrasonic sensor and process results
Void myTskFxn1(Void)
{
    while (TRUE) {
        Semaphore_pend(mySem1, BIOS_WAIT_FOREVER); // wait for semaphore to be posted

        // local variables
        UInt32 duration = 0;
        UInt ticksstarted= 0; //counter incremented by timer interrupt
        UInt tickscounted = 0; //counter incremented by timer interrupt

        // Set trigger pin high
        GpioDataRegs.GPBSET.bit.GPIO52 = 1;
        // Delay for 10 microseconds
        Task_sleep(10);
        // Set trigger pin low
        GpioDataRegs.GPBCLEAR.bit.GPIO52 = 1;

        // Wait for the echo pin to go high
        while(GpioDataRegs.GPDDAT.bit.GPIO97 == 0);

        // Echo pin is high, record start time
        ticksstarted = tickCount;

        // Wait for the echo pin to go low
        while(GpioDataRegs.GPDDAT.bit.GPIO97 == 1);

         // Echo pin is low, record stop time
        tickscounted = tickCount;

         // Calculate duration in us
         duration = tickscounted - ticksstarted;
         // distance calculated based on time and speed of sound
         distance = calculateDistance(duration);

         // Do something with the distance ( post to water the plants?? later problem)
    }
}
