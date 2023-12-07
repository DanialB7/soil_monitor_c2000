// Author: Danial Bozorgtar 
// Thie file contains the function that is used to configure and operate ultrasonic sensor
// Its primary function is to convert time measured from eCAP data to distance 

#include "ultrasonic.h"


float calculateDistance(UInt32 echoTime) {
    float distance = ((((float)echoTime)/(5800))/2);// formula for converting time to cm as per datasheet//DB 
    return distance;
}






