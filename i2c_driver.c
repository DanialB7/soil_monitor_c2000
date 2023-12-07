#include "i2c_driver.h"

#define DHT20_ADDRESS 0x38 // address for I2C temperature and humidity sensor

void start_i2c()
{
    EALLOW;
    //protect registers
    CpuSysRegs.PCLKCR9.bit.I2C_B = 1; //Enable I2C_B clock gate

    //SDA - GPIOP40
    GpioCtrlRegs.GPBGMUX1.bit.GPIO40 = 0b01; //
    GpioCtrlRegs.GPBMUX1.bit.GPIO40 = 0b10;  //
    GpioCtrlRegs.GPBQSEL1.bit.GPIO40 = 0b11; //8.9.2
    GpioCtrlRegs.GPBPUD.bit.GPIO40 = 0b0;   // Technical manual 8.10.2.7


    //SCL - SPIOP41
    GpioCtrlRegs.GPBGMUX1.bit.GPIO41 = 0b01;
    GpioCtrlRegs.GPBMUX1.bit.GPIO41 = 0b10;
    GpioCtrlRegs.GPBQSEL1.bit.GPIO41 = 0b11;
    GpioCtrlRegs.GPBPUD.bit.GPIO41 = 0b0;


    //I2C Initialization
    I2cbRegs.I2CMDR.bit.IRS = 0;      //I2C IRS disable
    I2cbRegs.I2CPSC.bit.IPSC = 0x13;   //prescale configuration used data sheet formula to calculate values
    I2cbRegs.I2CCLKH = 45; //high period (changed check with ken was getting negative )
    I2cbRegs.I2CCLKL = 45; //low period (changed check with ken)
    I2cbRegs.I2CMDR.bit.MST = 1; //Master mode
    I2cbRegs.I2CMDR.bit.TRX = 1; //Transmitter
    I2cbRegs.I2CMDR.bit.XA = 0; //enable 7-bit addressing
    I2cbRegs.I2CMDR.bit.DLB = 0; //disable loopback (might delete later)
    I2cbRegs.I2CMDR.bit.BC = 0; //8-bits transmission (look at the sensor data sheet to check how many bits per data send)
    //System_printf("i2c initialized\n");

    //disable FIFO
    I2cbRegs.I2CFFTX.bit.I2CFFEN = 0;
    I2cbRegs.I2CFFTX.bit.TXFFRST = 0;
    I2cbRegs.I2CFFRX.bit.RXFFRST = 0;
    //System_printf("FIFO disabled\n");

    I2cbRegs.I2CMDR.bit.IRS = 1; //I2C IRS enable
    //System_printf("IRS enabled for i2c\n");

    EDIS;
}

bool i2c_master_transmit(UInt8 dev_addr, UInt8 *commands, uint16_t length)
{
    uint16_t i = 0;
    bool success = false;
    //To make sure master is in transmitter mode after receiving data
    I2cbRegs.I2CMDR.bit.MST = 1; //Master mode
    I2cbRegs.I2CMDR.bit.TRX = 1; //Transmitter
    I2cbRegs.I2CSAR.bit.SAR = dev_addr; //configure the sensor address
    I2cbRegs.I2CCNT = length; //set up the length of data
    //length of data

    I2cbRegs.I2CMDR.bit.STT = 1; //Start condition toggle (also send the device address)

    if(length == 0)
    {
        //check that address has been sent
        while (!I2cbRegs.I2CSTR.bit.XRDY)
        {
            if (I2cbRegs.I2CSTR.bit.NACK) //check for nack
            {
                I2cbRegs.I2CSTR.bit.NACK = 1;
                I2cbRegs.I2CSTR.bit.XRDY = 1;
                I2cbRegs.I2CMDR.bit.STP = 1; //stop condition toggle
                return false;
            }
        }
    }
    else
    {
        for (i = 0; i < length; i++)
        {

            success = i2c_send_byte(commands[i]); //loop through the command array
            if (success == false)
            {
                return false;
            }
        }
    }

    I2cbRegs.I2CMDR.bit.STP = 1; //stop condition toggle
    return true;
}

bool i2c_send_byte(UInt8 byte)
{
    while (!I2cbRegs.I2CSTR.bit.XRDY) //check for transmit-data-ready interrupt enable
    {

        if (I2cbRegs.I2CSTR.bit.NACK) //check for nack
        {
            I2cbRegs.I2CSTR.bit.NACK = 1;
            I2cbRegs.I2CSTR.bit.XRDY = 1;
            I2cbRegs.I2CMDR.bit.STP = 1; //stop condition toggle
            return false;
        }
    }

    I2cbRegs.I2CDXR.bit.DATA = byte;

    return true;

}
bool resetRegister(UInt8 reg)
{
    UInt8 value[3];
    UInt8 data[] = {reg, 0x00, 0x00};
    uint16_t length = sizeof(data) / sizeof(data[0]);
    i2c_master_transmit(DHT20_ADDRESS,data,length);

    i2c_master_receive (DHT20_ADDRESS,value,3);
    UInt8 data1[] = {0xB0|reg, value[1], value[2]};

    i2c_master_transmit(DHT20_ADDRESS,data1,length);
    return true;
}
bool i2c_received_byte(UInt8 *byte)
{
    while (!I2cbRegs.I2CSTR.bit.RRDY) //check for receive-data-ready interrupt enable
    {
        if (I2cbRegs.I2CSTR.bit.NACK) //check for nack (gets stuck here)
        {
            I2cbRegs.I2CSTR.bit.NACK = 1;
            I2cbRegs.I2CSTR.bit.RRDY = 1;
            I2cbRegs.I2CMDR.bit.STP = 1; //stop condition toggle
            return false;
        }
    }
    *byte = (UInt8) I2cbRegs.I2CDRR.bit.DATA;
    return true;
}
bool i2c_master_receive(UInt8 dev_addr, UInt8 *data_received, uint16_t length)
{
    bool success = false;
    uint16_t i = 0;

    //To make sure master is in transmitter mode after receiving data
    I2cbRegs.I2CMDR.bit.MST = 1; //Master mode
    I2cbRegs.I2CMDR.bit.TRX = 0; //Receiver mode

    I2cbRegs.I2CSAR.bit.SAR = dev_addr;
    I2cbRegs.I2CCNT = length;
    //length of data

    I2cbRegs.I2CMDR.bit.STT = 1; //Start condition toggle (also send the device address)

    for (i = 0; i < length; i++)
    {
        success = i2c_received_byte(data_received + i); //loop through the command array
        if (success == false)
        {
            return false;
        }
        // If it's the last byte, send NACK before stopping
        if (i == (length - 2)){
            I2caRegs.I2CMDR.bit.NACKMOD = 1;
        }
    }
    return true; //missing (check with ken later)
}


