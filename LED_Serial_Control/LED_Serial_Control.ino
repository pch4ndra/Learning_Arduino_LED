#include <SoftwareSerial.h>

unsigned long timer = millis();

char SerialByteIn;
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()){
    SerialByteIn = Serial.read();
    if (SerialByteIn == '\n') { break; }
    switch (SerialByteIn) {
      case '1': digitalWrite(LED_BUILTIN, HIGH); Serial.print("LED ON\n"); break;
      case '0': digitalWrite(LED_BUILTIN, LOW); Serial.print("LED OFF\n"); break;
      default: Serial.print("Input must be a \'1\' or a \'0\'\n"); break;
    }
  Serial.print("\n");
  }
}
