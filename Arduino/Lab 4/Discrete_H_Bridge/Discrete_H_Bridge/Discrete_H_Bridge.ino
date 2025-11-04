int Motor1A = 10;
int Motor1B = 11;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(Motor1A, 0);
for (int fadeValue = 0 ; fadeValue <= 225; fadeValue += 5) {
  analogWrite(Motor1B, fadeValue);
  Serial.print("Motor Clockwise Speed Up PWM: ");
  Serial.println(fadeValue);
  delay(10);
}
for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
  analogWrite(Motor1B, fadeValue);
  Serial.print("Motor Clockwise Slwo Down PWM: ");
  Serial.println(fadeValue);
  delay(10);
}
analogWrite(Motor1A, 0);
analogWrite(Motor1B, 0);
Serial.println("Motor Stop for 2 seconds");
delay(2000);

analogWrite(Motor1B, 0);
for (int fadeValue = 0 ; fadeValue <= 225; fadeValue += 5) {
  analogWrite(Motor1A, fadeValue);
  Serial.print("Motor Clockwise Speed Up PWM: ");
  Serial.println(fadeValue);
  delay(10);
}
for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
  analogWrite(Motor1A, fadeValue);
  Serial.print("Motor Clockwise Slwo Down PWM: ");
  Serial.println(fadeValue);
  delay(10);
}
analogWrite(Motor1A, 0);
analogWrite(Motor1B, 0);
Serial.println("Motor Stop for 2 seconds");
delay(2000);

}
