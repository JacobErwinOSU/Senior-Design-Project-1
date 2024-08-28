/* 
Design Project One
Author: Brent Bertaux
Team Name: Spicy Titans
*/




#include "gpio_setup.h"
#include <wiringPi.h>

void setupGPIO() {
    pinMode(analogInPin, INPUT);
    pinMode(controlPin1, OUTPUT);
    pinMode(controlPin2, OUTPUT);
}