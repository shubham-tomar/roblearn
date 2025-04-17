#include <Arduino.h>
#include "led.h"

void setup() {
  initLed(13); // Setup LED on pin 13
}

void loop() {
  turnLedOn();
  delay(500);
  turnLedOff();
  delay(500);
}
