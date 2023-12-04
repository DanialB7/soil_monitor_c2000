// Filename:            HwiExample_DeviceInit.c
//
// Description:	        Initialization code for Hwi Example
//
// Version:             1.0
//
// Target:              TMS320F28379D
//
// Author:              David Romalo
//
// Date:                19Oct2021

#include <Headers/F2837xD_device.h>

extern void DelayUs(Uint16);

void DeviceInit(void)
{
EALLOW;
    //Initialize GPIO lines for LED
    GpioCtrlRegs.GPAMUX2.bit.GPIO31 = 0; //D10 (blue LED)
    GpioCtrlRegs.GPADIR.bit.GPIO31 = 1;
    GpioDataRegs.GPACLEAR.bit.GPIO31 = 1;

    GpioCtrlRegs.GPBMUX1.bit.GPIO34 = 0; //D9 (red LED)
    GpioCtrlRegs.GPBDIR.bit.GPIO34 = 1;
    GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;

    //Initialize GPIO for Ultrasonic Sensor
    GpioCtrlRegs.GPBMUX2.bit.GPIO52 = 0; //Trig pin ultrasonic
    GpioCtrlRegs.GPBDIR.bit.GPIO52 = 1; // configure to output
    GpioDataRegs.GPBCLEAR.bit.GPIO52 = 1; //clear

    //Initialize GPIO for water pump
    GpioCtrlRegs.GPAMUX2.bit.GPIO22 = 0; //Trig pin ultrasonic
    GpioCtrlRegs.GPADIR.bit.GPIO22 = 1; // configure to output
    GpioDataRegs.GPACLEAR.bit.GPIO22 = 1; //clear



    //---------------------------------------------------------------
    // INITIALIZE A-D
    //---------------------------------------------------------------
    CpuSysRegs.PCLKCR13.bit.ADC_A = 1; //enable A-D clock for ADC-A
    AdcaRegs.ADCCTL2.bit.PRESCALE = 0xf;
    AdcaRegs.ADCCTL1.bit.ADCPWDNZ = 1;

    //generate INT pulse on end of conversion:
    AdcaRegs.ADCCTL1.bit.INTPULSEPOS = 1;

    //wait 1 ms after power-up before using the ADC:
    DelayUs(1000);

    AdcaRegs.ADCSOC0CTL.bit.TRIGSEL = 2; //trigger source = CPU1 Timer 1
    AdcaRegs.ADCSOC0CTL.bit.CHSEL = 5; //set SOC0 to sample A5
    AdcaRegs.ADCSOC0CTL.bit.ACQPS = 139; //set SOC0 window to 139 SYSCLK cycles
    AdcaRegs.ADCINTSEL1N2.bit.INT1SEL = 0; //connect interrupt ADCINT1 to EOC0
    AdcaRegs.ADCINTSEL1N2.bit.INT1E = 1; //enable interrupt ADCINT1


    CpuSysRegs.PCLKCR3.bit.ECAP1 = 1;
    GpioCtrlRegs.GPAQSEL1.bit.GPIO5 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO5 = 3; //Echo pin ultrasonic
    InputXbarRegs.INPUT7SELECT = 5;
    GpioCtrlRegs.GPADIR.bit.GPIO5 = 0; // configure to input
    GpioDataRegs.GPACLEAR.bit.GPIO5 = 1; //clear

    ECap1Regs.ECCLR.all = 0xFFFF;
    ECap1Regs.ECCTL1.bit.CAP1POL = 0;
    ECap1Regs.ECCTL1.bit.CAP2POL = 1;
    ECap1Regs.ECCTL1.bit.CAP3POL = 0;
    ECap1Regs.ECCTL1.bit.CAP4POL = 1;
    ECap1Regs.ECCTL1.bit.CTRRST1 = 1;
    ECap1Regs.ECCTL1.bit.CTRRST2 = 1;
    ECap1Regs.ECCTL1.bit.CTRRST3 = 1;
    ECap1Regs.ECCTL1.bit.CTRRST4 = 1;
    ECap1Regs.ECCTL1.bit.CAPLDEN = 1;
    ECap1Regs.ECCTL1.bit.PRESCALE = 0;
    ECap1Regs.ECCTL2.bit.CAP_APWM = 0;
    ECap1Regs.ECCTL2.bit.CONT_ONESHT = 0;
    ECap1Regs.ECCTL2.bit.SYNCO_SEL = 2;
    ECap1Regs.ECCTL2.bit.SYNCI_EN = 0;
    ECap1Regs.ECCTL2.bit.TSCTRSTOP = 1; // Allow TSCTR to run
    ECap1Regs.ECEINT.bit.CEVT2 = 1;

EDIS;
}
