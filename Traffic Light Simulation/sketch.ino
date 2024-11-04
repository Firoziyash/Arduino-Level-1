const int redPin = 9;    // Red LED
const int yellowPin = 10; // Yellow LED
const int greenPin = 11;  // Green LED

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  digitalWrite(greenPin, HIGH);   // Green light ON
  delay(5000);                    // Wait 5 seconds
  digitalWrite(greenPin, LOW);

  digitalWrite(yellowPin, HIGH);  // Yellow light ON
  delay(2000);                    // Wait 2 seconds
  digitalWrite(yellowPin, LOW);

  digitalWrite(redPin, HIGH);     // Red light ON
  delay(5000);                    // Wait 5 seconds
  digitalWrite(redPin, LOW);
}
