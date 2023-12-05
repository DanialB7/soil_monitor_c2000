
/***********************************************************************************
 * 28379D_uart.h
 *
 * A module containing functions allowing for basic UART over USB communications with
 * the TI tm320F828379D controller.
 *
 * Author:    Myles Parfeniuk
 * Date:      10/09/2023
 * Modified:  10/20/2023
 *********************************************************************************/
#ifndef _28379D_UART_H_
#define _28379D_UART_H_

//C standard library includes
#include <stdint.h>
//TI Includes
#include <Headers/F2837xD_device.h>

#define LSP_CLK_FREQ 50000000U

/***********************************************************************************
*
* uart_init
*
* Initializes SCIA module at specified baud rate, 8 bit frame, 1 stop bit.
*
*
* arguments:
*                       baudrate- The desired baud rate of the data.
*
* return:   n/a
*
* Author:    Myles Parfeniuk
* Date:      10/09/2023
* Modified:  10/20/2023
************************************************************************************/
void uart_init(uint32_t baudrate);

/***********************************************************************************
*
* uart_tx_char
*
* Sends a single byte out SCIA module A.
*
*
* arguments:
*                       tx_char- The character to be sent.
*
* return:   n/a
*
* Author:    Myles Parfeniuk
* Date:      10/09/2023
* Modified:  10/20/2023
************************************************************************************/
void uart_tx_char(char tx_char);


/***********************************************************************************
*
* uart_tx_str
*
* Sends a null-terminated string with SCIA module using printf-style format specifiers.
*
* arguments:
*
* format - Pointer to the first element of the string to be sent.
*
* return:   n/a
*
* Author:    Myles Parfeniuk
* Date:      10/09/2023
* Modified:  10/21/2023
************************************************************************************/
void uart_tx_str(const char *str);

/***********************************************************************************
*
* uart_tx_buff
*
* Sends a buffer of characters up to length characters over SCIA module.
*
*
* arguments:
*                       tx_buff- Pointer to the first element of the buffer to be sent.
*                       length- how many characters to send
*
* return:   n/a
*
* Author:    Myles Parfeniuk
* Date:      10/09/2023
* Modified:  10/20/2023
************************************************************************************/
void uart_tx_buff(char *tx_buff, uint16_t length);



#endif /*_28379D_UART_H_ */
