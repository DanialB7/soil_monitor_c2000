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

#define VREFHI 3.0
#define DHT20_ADDRESS  0x38

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
volatile Bool isrFlag3 = FALSE; //falg used by the delay function
volatile unsigned int counter = 0; // Global counter variable

float moisture_voltage_reading; //for Hwi KH
float water_content;




/* ======== main ======== */
Int main()
{ 
    System_printf("Enter main()\n"); //use ROV->SysMin to view the characters in the circular buffer

    //initialization
    delay200ms(); //delay to start up i2c
    DeviceInit(); //initialize processor
    start_i2c();

    //jump to RTOS (does not return):
    BIOS_start();
    return(0);
}

// Function to get the current counter value
unsigned int getCounter() {
    return counter;
}

// Function to reset the counter
void resetCounter() {
    counter = 0;
}

// Function to create a 200ms delay
void delay200ms() {
    if(isrFlag3== TRUE) {
        isrFlag3= FALSE;
        resetCounter(); // Reset the counter
        while (getCounter() < 200); // Wait for the counter to reach 200
    }
}
/* ======== myTickFxn ======== */
//Timer tick function that increments a counter and sets the isrFlag
//Entered 100 times per second if PLL and Timer set up correctly
Void myTickFxn(UArg arg)
{
    tickCount++; //increment the tick counter
    counter++;//increment the counter for delay
    if(tickCount % 100 == 0) { //KH change 5 to 100
        isrFlag = TRUE; //tell idle thread to do something 20 times per second
        isrFlag2 = TRUE;
        isrFlag3 = TRUE;
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
/* ======== myIdleFxn ======== */
//Idle function that print time in second to SysMin
Void myIdleFxn2(Void)
{
    UInt8 commands[1] = {0x75};
    UInt8 data_rx[5] = {0, 0, 0, 0, 0};
    Task_sleep(100U);
    while(1)
     {
         i2c_master_transmit(DHT20_ADDRESS, commands, 1);
         Task_sleep(10U);
         //i2c_master_receive(DHT20_ADDRESS, data_rx, 1);
         //Task_sleep(10U);
     }
}
/* ========= myHwi ========== */
//Hwi function that is called by the attached hardware devices e.g ADC
Void myHwi(Void)
{
    //read ADC value from temperature sensor:
    moisture_voltage_reading = ((VREFHI/4095)*AdcaResultRegs.ADCRESULT0); //get reading and scale re VREFHI
    AdcaRegs.ADCINTFLGCLR.bit.ADCINT1 = 1; //clear interrupt flag

    //converting voltage reading of adc to water content in soil
    water_content =(((1/moisture_voltage_reading)*2.48) - 0.72)*100;

}

Void myTskFxn(Void)
{
    while (TRUE) {
        Semaphore_pend(mySem, BIOS_WAIT_FOREVER); // wait for semaphore to be posted
        GpioDataRegs.GPBTOGGLE.bit.GPIO34 = 1;//Toggle red LED
    }
}

