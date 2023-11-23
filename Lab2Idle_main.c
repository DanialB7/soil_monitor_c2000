// Filename:            Lab2Idle_main.c
//
// Description:         This file has a main, timer, and idle function for SYS/BIOS application.
//
// Target:              TMS320F28379D
//
// Author:              DR
//
// Date:                Oct. 12, 2021

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
#include <ti/sysbios/knl/Clock.h>
#include "i2c_driver.h"

#include <Headers/F2837xD_device.h>

//function prototypes:
extern void DeviceInit(void);

//declare global variables:
volatile Bool isrFlag = FALSE; //flag used by idle function
volatile UInt tickCount = 0; //counter incremented by timer interrupt
volatile Bool isrFlag2 = FALSE; //flag used by myIddleFxn2 //KH

float moisture_voltage_reading; //for Hwi KH
float water_content;





/* ======== main ======== */
Int main()
{ 
    System_printf("Enter main()\n"); //use ROV->SysMin to view the characters in the circular buffer

    //initialization:
    DeviceInit(); //initialize processor
    start_i2c();

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
//For Hwi
Void myHwi(Void)
{
    //read ADC value from temperature sensor:
    moisture_voltage_reading = ((VREFHI/4095)*AdcaResultRegs.ADCRESULT0); //get reading and scale re VREFHI
    AdcaRegs.ADCINTFLGCLR.bit.ADCINT1 = 1; //clear interrupt flag

    //converting voltage reading of adc to water content in soil
    water_content =(((1/moisture_voltage_reading)*2.48) - 0.72)*100;

}

