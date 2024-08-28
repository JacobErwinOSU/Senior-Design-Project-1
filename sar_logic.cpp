/* 
Design Project One
Author: Brent Bertaux
Team Name: Spicy Titans
*/



#include "sar_algorithm.h"
#include <wiringPi.h>

int performSAR(int analogInPin, int controlPin1, int controlPin2, int numBits) {
    int result = 0;
    for (int i = numBits - 1; i >= 0; i--) {
        int threshold = (1 << i);
        digitalWrite(controlPin1, HIGH);
        delay(10);
        int analogValue = analogRead(analogInPin);
        if (analogValue >= threshold) {
            result |= (1 << i);
        }
        digitalWrite(controlPin1, LOW);
    }
    return result;
}