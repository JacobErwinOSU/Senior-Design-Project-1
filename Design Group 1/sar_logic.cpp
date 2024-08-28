/* 
Design Project One
Author: Brent Bertaux
Team Name: Spicy Titans
*/



#include "sar_algorithm.h"
#include <wiringPi.h>

int SAR(int analogInPin, int controlPin1, int controlPin2, int clockPin, int numBits, int frequency);
    int result = 0;
    int halfPeriod = 1000000 / (2 * frequency); // Calculate the half-period for the clock
    for (int i = numBits - 1; i >= 0; i--) {
        int threshold = (1 << i);
        generateClockPulse(clockPin, halfPeriod); // Generate pulse before comparison

        digitalWrite(controlPin1, HIGH);
        delay(10);
        int analogValue = analogRead(analogInPin);

        generateClockPulse(clockPin, halfPeriod); // Generate clock pulse before decision
        if (analogValue >= threshold) {
            result |= (1 << i);
        }
        digitalWrite(controlPin1, LOW);
    }
    return result;
}