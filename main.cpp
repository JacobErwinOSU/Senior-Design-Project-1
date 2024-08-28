/* 
Design Project One
Author: Brent Bertaux
Team Name: Spicy Titans
*/

// This file serves to initalize the pi

#include <iostream>
#include <wiringPi.h>
#include "gpio_setup.h"
#include "sar_logic.h"

int main() {
    wiringPiSetup();
    setupGPIO(); // Function from gpio_setup

    // Be sure to update pins as necessary
    const int analogInPin = 0;
    const int controlPin1 = 1;
    const int controlPin2 = 2;
    const int numBits = 4; // For a 4-bit ADC

    while (true) {

        int digitalValue = SAR(analogInPin, controlPin1, controlPin2, numBits);
        // Function from sar_logic.h

        std:cout << "Digital Value: " << digitalValue << std:endl;

        delay(1000); // For testing purpose, eventually we want this to be 10 to meet 100 samples/second



    }
}