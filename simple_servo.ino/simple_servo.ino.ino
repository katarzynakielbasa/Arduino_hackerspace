#include <Servo.h>
#include <Wire.h>

Servo servoMain; //define our servo
void setup() {
  servoMain.attach(9);
}

void loop() {
  servoMain.write(0); //turn servo left to 0 degrees
  delay(1000);
  servoMain.write(180); //turn servo right to 180 degrees
  delay(1000);
}
