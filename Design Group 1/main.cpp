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

    // Be sure to update pins as necessary
    const int analogInPin = 0;
    const int controlPin1 = 1;
    const int controlPin2 = 2;
    const int clockPin = 3;
    const int numBits = 4; // For a 4-bit ADC
    const int clockFrequency = 1000; // 1 kHz frequency

int main() {
    wiringPiSetup();
    setupGPIO(); // Function from gpio_setup



    while (true) {

        int digitalValue = SAR(analogInPin, controlPin1, controlPin2, clockPin, numBits, clockFrequency);
        // Function from sar_logic.h

        std:cout << "Digital Value: " << digitalValue << std:endl;

        delay(1000); // For testing purpose, eventually we want this to be 10 to meet 100 samples/second



    }
}