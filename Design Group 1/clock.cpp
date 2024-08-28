/* 
Design Project One
Author: Brent Bertaux
Team Name: Spicy Titans
*/

// Goal: Integrate clock into SAR Operations using GPIO pin

#include <wiringPi.h>
#include "clock.h"

void generateClockPulse(int clockPin, int halfPeriod) {
    digitalWrite(clockPin, HIGH);
    delayMicroseconds(halfPeriod);
    digitalWrite(clockPin, LOW);
    delayMicroseconds(halfPeriod);
}