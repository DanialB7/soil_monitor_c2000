#ifndef _28379D_UART_H_
#define _28379D_UART_H_

//C standard library includes
#include <stdint.h>
//TI Includes
#include <Headers/F2837xD_device.h>

#define LSP_CLK_FREQ 50000000U
//Initializes SCIA module at specified baud rate, 8 bit frame, 1 stop bit.
void uart_init(uint32_t baudrate);
//Sends a byte out SCIA module A.
void uart_tx_char(char tx_char);
//Sends a null-terminated string
void uart_tx_str(const char *str);
// Sends a buffer of characters up to length characters over SCIA module.
void uart_tx_buff(char *tx_buff, uint16_t length);

#endif
