//in-house includes
#include "28379D_uart.h"

//C standard library includes
#include <stddef.h>
#include <stdio.h>
#include <math.h>
#include <stdarg.h>
#include <stdlib.h>

void uart_init(uint32_t baudrate)
{
    uint32_t baud_val = ((LSP_CLK_FREQ / (baudrate * 8U)) - 1U);

    EALLOW; //allow writes to protected registers
    CpuSysRegs.PCLKCR7.bit.SCI_B = 1; //enable SCIB module

    //GPIO19 , rx_pin setup
    GpioCtrlRegs.GPAGMUX2.bit.GPIO19 |= 0x0U;
    GpioCtrlRegs.GPAMUX2.bit.GPIO19 |= 0x2U;
    GpioCtrlRegs.GPAPUD.bit.GPIO19 = 0;
    GpioCtrlRegs.GPAQSEL2.bit.GPIO19 |= 0x3U;

    //GPIO18, tx_pin setup
    GpioCtrlRegs.GPAGMUX2.bit.GPIO18 |= 0x0U;
     GpioCtrlRegs.GPAMUX2.bit.GPIO18 |= 0x2U;
     GpioCtrlRegs.GPAPUD.bit.GPIO18 = 0;
     GpioCtrlRegs.GPAQSEL2.bit.GPIO18 |= 0x3U;

    ScibRegs.SCIFFRX.bit.RXFFOVRCLR = 1; //clear overflow flag
    //reset tx fifo
    ScibRegs.SCIFFTX.bit.TXFIFORESET = 0;
    ScibRegs.SCIFFTX.bit.TXFIFORESET = 1;
    //reset rx fifo
    ScibRegs.SCIFFRX.bit.RXFIFORESET = 0;
    ScibRegs.SCIFFRX.bit.RXFIFORESET = 1;
    //reset transmit and receive channels
    ScibRegs.SCIFFTX.bit.SCIRST = 0;
    ScibRegs.SCIFFTX.bit.SCIRST = 1;

    ScibRegs.SCIFFTX.bit.SCIFFENA = 1; //enable FIFOs


    //perform soft reset to clear flags
    ScibRegs.SCICTL1.bit.SWRESET = 0;
    ScibRegs.SCICTL1.bit.SWRESET = 1U;


    //disable transmitting & receiving
    ScibRegs.SCICTL1.bit.RXENA = 0;
    ScibRegs.SCICTL1.bit.TXENA = 0;
    //set baud rate
    ScibRegs.SCIHBAUD.all = (baud_val & 0xFF00U) >> 8U;
    ScibRegs.SCILBAUD.all = (baud_val & 0x00FFU);

    ScibRegs.SCICCR.bit.STOPBITS = 0; //set 1 stop bit
    ScibRegs.SCICCR.bit.PARITYENA = 0; //disable parity
    ScibRegs.SCICCR.bit.SCICHAR = 0x7U; //8 bit worth length

    //enable transmitting & receiving
    ScibRegs.SCICTL1.bit.RXENA = 1;
    ScibRegs.SCICTL1.bit.TXENA = 1;

    //perform soft reset to clear flags
    ScibRegs.SCICTL1.bit.SWRESET = 0;
    ScibRegs.SCICTL1.bit.SWRESET = 1U;


    EDIS; //disable writes to protected registers


}

void uart_tx_char(char tx_char)
{
    while(ScibRegs.SCIFFTX.bit.TXFFST != 0)
        {
            ; //wait until tx buffer is empty
        }
        ScibRegs.SCITXBUF.bit.TXDT = tx_char;
}

void uart_tx_str(const char *str)
{
    int i = 0;
    //while string hasn't reached end (NULL key) send characters
    while (str[i] != '\0')
    {
        uart_tx_char(str[i++]); //send current char
    }
}

void uart_tx_buff(char *tx_buff, uint16_t length)
{
    uint16_t i = 0;

    for(i = 0; i < length; i++)
    {
        uart_tx_char(tx_buff[i]);
    }
}

