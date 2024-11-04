const int ledPin = 9; // Pin for LED
int brightness = 0;    // Initial brightness
int fadeAmount = 5;    // Amount to fade the LED

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, brightness);
  brightness += fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount; // Reverse the direction of fading
  }
  delay(30);
}
