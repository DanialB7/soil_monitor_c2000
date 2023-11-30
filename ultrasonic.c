#include "ultrasonic.h"
/*
 * ultrasonic.c
 *
 *  Created on: Nov. 29, 2023
 *  Author: Danial
 */



float calculateDistance(UInt32 echoTime) {
    float distance = (((float)echoTime)/(5.8));
    return distance;
}





