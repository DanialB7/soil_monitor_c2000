#include "ultrasonic.h"
/*
 * ultrasonic.c
 *
 *  Created on: Nov. 29, 2023
 *  Author: Danial
 */

float calculateDistance(UInt32 echoTime) {
    float distance = ((((float)echoTime)/(5800))/2);// formula for converting time to cm
    return distance;
}






