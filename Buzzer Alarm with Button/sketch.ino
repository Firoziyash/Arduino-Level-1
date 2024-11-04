const int buttonPin = 2; // Button pin
const int buzzerPin = 9; // Buzzer pin

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    tone(buzzerPin, 1000); // Buzz at 1000 Hz
  } else {
    noTone(buzzerPin);
  }
}
