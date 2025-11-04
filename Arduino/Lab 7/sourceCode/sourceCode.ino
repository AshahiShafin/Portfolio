#include <Servo.h>
Servo myservo;

int potpin = A0;
int val;

void setup() {
  Serial.begin(9600);
  myservo.attach(10);
}

void loop() {
  val = analogRead(potpin);
  Serial.print("Analog Value: ");
  Serial.print(val);
  val = map(val, 0, 1023, 0, 180);
  Serial.print(" Servo Write Value: ");
  Serial.println(val);
  myservo.write(val);
  delay(10);
}
