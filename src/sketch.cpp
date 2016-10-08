#include "arduino.h"
#include <cpp/blink.cpp>
// #include <Scheduler.h>

int led1 = 13;
int led2 = 12;
int led3 = 11;

Blink b1;
Blink b2;
Blink b3;

int DEFAULT_BLINK = 500;
int DEFAULT_SLEEP = 2000;

void setup() {
  Serial.begin(9600);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  // Scheduler.startLoop(loop2);
  // Scheduler.startLoop(loop3);

  b1 = Blink(led1, DEFAULT_BLINK, DEFAULT_SLEEP);
  b2 = Blink(led2, 750, DEFAULT_SLEEP);
  b3 = Blink(led3, 1000, DEFAULT_SLEEP);
}

void loop() {
  b1.doBlink();
  b1.doSleep();
}

void loop2() {
  b2.doBlink();
  b2.doSleep();
}

void loop3() {
  b3.doBlink();
  b3.doSleep();
}
