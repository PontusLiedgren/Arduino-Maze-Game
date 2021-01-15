#include <Arduino.h>
#include <Servo.h>

Servo myServo1;
Servo myServo2; 

int servo1 = 9;
int servo2 = 10;
int joyX = A0;
int joyY = A1;

void setup() {
  myServo1.attach(servo1);
  myServo2.attach(servo2);
}

void loop() {
int valX = analogRead(joyX);
int valY = analogRead(joyY);

valX = map(valX, 0, 1023, 10, 170);
valY = map(valY, 0, 1023, 10, 170);

myServo1.write(valX);
myServo2.write(valY);

delay(5);
}
  