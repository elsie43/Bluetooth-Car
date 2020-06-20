#include<SoftwareSerial.h>
  SoftwareSerial BTSerial(11, 12);

void setup() {
  Serial.begin(38400);
  Serial.println("Enter AT commands:");
  BTSerial.begin(38400);
}

void loop() {
  if (BTSerial.available())
    Serial.write(BTSerial.read());
  if (Serial.available())
    BTSerial.write(Serial.read());
}
