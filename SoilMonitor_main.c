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
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Clock.h>
#include "i2c_driver.h"

#include <Headers/F2837xD_device.h>

//Task handle defined in .cfg File:
extern const Task_Handle Tsk0;

//Semaphore handle defined in .cfg File:
extern const Semaphore_Handle mySem;

//function prototypes:
extern void DeviceInit(void);


//declare global variables:
volatile Bool isrFlag = FALSE; //flag used by idle function
volatile UInt tickCount = 0; //counter incremented by timer interrupt
volatile Bool isrFlag2 = FALSE; //flag used by myIddleFxn2 //KH

float moisture_voltage_reading; //for Hwi KH
float water_content;
float humidity;
float temperature;


/* ======== main ======== */
Int main()
{ 
    //System_printf("Enter main()\n"); //use ROV->SysMin to view the characters in the circular buffer

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
    if(tickCount % 100 == 0) { //KH change 5 to 100
        isrFlag = TRUE; //tell idle thread to do something 20 times per second
        isrFlag2 = TRUE;
        Semaphore_post(mySem);
    }
}

/* ======== myIdleFxn ======== */
//Idle function that is called repeatedly from RTOS
Void myIdleFxn(Void)
{
   if(isrFlag == TRUE) {
       isrFlag = FALSE;
       //toggle blue LED:
       GpioDataRegs.GPATOGGLE.bit.GPIO31 = 1;
   }
}

/* ========= myHwi ========== */
//Hwi function that is called by the attached hardware devices e.g ADC
Void myHwi(Void)
{
    System_printf("HWI started \n");
    //read ADC value from temperature sensor:
    moisture_voltage_reading = ((VREFHI/4095)*AdcaResultRegs.ADCRESULT0); //get reading and scale re VREFHI
    AdcaRegs.ADCINTFLGCLR.bit.ADCINT1 = 1; //clear interrupt flag

    //converting voltage reading of adc to water content in soil
    water_content =(((1/moisture_voltage_reading)*2.48) - 0.72)*100;
    System_printf("HWI ended\n");

}

Void myTskFxn(Void)
{
    System_printf("TSK started\n");
    while (TRUE) {
        Semaphore_pend(mySem, BIOS_WAIT_FOREVER); // wait for semaphore to be posted
        GpioDataRegs.GPBTOGGLE.bit.GPIO34 = 1;//Toggle red LED to see if TSK is functioning properly

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
        System_printf("sensor status sent \n");
        }
        // Step 2: Initialize sensor if not correctly setup

        if (status != 0x18) {
        System_printf("sensor initialized\n");
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
       System_printf("send measurement command\n");

       // Step 4: Read sensor data

       UInt8 data_rx[6]; // Array to store 6 bytes of data
       i2c_master_receive(DHT20_ADDRESS, data_rx, 6);
       Task_sleep(20); // Short delay after reading data
       System_printf("reading sensor data\n");

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

