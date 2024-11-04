#include <Servo.h>

Servo myServo; // Create a servo object
const int potPin = A0; // Potentiometer pin

void setup() {
  myServo.attach(9); // Servo control pin
}

void loop() {
  int potValue = analogRead(potPin);
  int angle = map(potValue, 0, 1023, 0, 180);
  myServo.write(angle); // Set servo position
  delay(15);
}
