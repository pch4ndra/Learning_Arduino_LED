#include "random.h"

int redPin= 11;
int greenPin = 10;
int bluePin = 9;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
void loop() {
  RGB_color(255, 0, 0); // Red
  delay(1000);
  RGB_color(0, 255, 0); // Green
  delay(1000);
  RGB_color(0, 0, 255); // Blue
  delay(1000);
  RGB_color(255, 255, 125); // Raspberry
  delay(1000);
  RGB_color(0, 255, 255); // Cyan
  delay(1000);
  RGB_color(255, 0, 255); // Magenta
  delay(1000);
  RGB_color(255, 255, 0); // Yellow
  delay(1000);
  RGB_color(0, 255, 255);  // Aqua
  delay(1000);
  RGB_color(170, 0, 255); // Purple
  delay(1000);
  RGB_color(255, 255, 255); // White
  delay(1000);
  RGB_color(setRandInt(), setRandInt(), setRandInt()); // Random Color
  delay(1000);
}
void RGB_color(int rValue, int gValue, int bValue)
 {
  analogWrite(redPin, rValue);
  analogWrite(greenPin, gValue);
  analogWrite(bluePin, bValue);
}
