#include <Arduino.h>

#include <AM2321.h>

AM2321 am2321;
void readByAM2321()
{
	am2321.read();

    Serial.print("(");
    Serial.print(am2321.temperature/10.0);
    Serial.print(", ");
    Serial.print(am2321.humidity/10.0);
    Serial.println(')');
}

void setup() {
  Serial.begin(9600);
}

void loop(){
  readByAM2321();
  delay(500);
}
