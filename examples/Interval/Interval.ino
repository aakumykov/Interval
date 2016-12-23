#include <Interval.h>

Interval int1(400);
Interval int2(1000);

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (int1.ready()) {
    Serial.print(int1.duration());
    Serial.println(" has expired");
  }

  if (int2.ready()) {
    Serial.print(int2.duration());
    Serial.println(" has expired");
  }
}