#include <Arduino.h>
#include "led.h"

static int ledPin;

void initLed(int pin) {
  ledPin = pin;
  pinMode(ledPin, OUTPUT);
}

void turnLedOn() {
  digitalWrite(ledPin, HIGH);
}

void turnLedOff() {
  digitalWrite(ledPin, LOW);
}
