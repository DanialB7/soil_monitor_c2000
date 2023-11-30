/*
 * ultrasonic.h
 *
 *  Created on: Nov. 29, 2023
 *      Author: Danial
 */

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_


//C standard library includes
#include <ctype.h>

//TI includes
#include <Headers/F2837xD_device.h>
#include <xdc/runtime/System.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <xdc/std.h>
#include <Headers/F2837xD_device.h>

extern void DeviceInit(void);


float calculateDistance(UInt32 echoTime);


#endif /* ULTRASONIC_H_ */
