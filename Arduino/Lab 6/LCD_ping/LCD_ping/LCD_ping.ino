#include <LiquidCrystal.h>
int echoPin = 6;
int trigPin = 7;
float inch;
float centimeter;
long duration;
const int rs =12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
  
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  centimeter = (duration / 2)/74.0;
  Serial.print(centimeter);
  Serial.print(" cm ");
  Serial.print(inch);
  Serial.print(" in ");
  lcd.setCursor(0, 0);
  lcd.print(centimeter);
  lcd.print("cm     ");
  lcd.setCursor(0, 1);
  lcd.print(inch);
  lcd.print("in     ");
  delay(500);
}
