#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // Adjust pins as necessary

void setup() {
  lcd.begin(16, 2); // Initialize 16x2 LCD
  lcd.print("Hello, Firoziyash!"); // Display text
}

void loop() {
  // Nothing here
}
