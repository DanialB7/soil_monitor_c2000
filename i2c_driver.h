#ifndef I2C_DRIVER_H_
#define I2C_DRIVER_H_

#endif /* I2C_DRIVER_H_ */

#define DHT20_ADDR 0x38     //consult data sheet
#define DHT20_SCLK 100000UL //UL = Unsigned long

//C standard library includes
#include <ctype.h>

//TI includes
#include <Headers/F2837xD_device.h>
#include <xdc/runtime/System.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <xdc/std.h>


void start_i2c();

bool i2c_master_transmit(UInt8 dev_addr, UInt8 *commands, uint16_t length);
bool i2c_send_byte(UInt8 byte);

bool i2c_master_receive(UInt8 dev_addr, UInt8 *data_received, uint16_t length);
bool i2c_receive_byte(UInt8 *byte);


