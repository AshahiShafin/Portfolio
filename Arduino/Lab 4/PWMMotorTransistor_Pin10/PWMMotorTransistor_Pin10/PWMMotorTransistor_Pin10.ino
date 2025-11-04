int MotorPWM = 10;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int fadeValue = 0 ; fadeValue <= 225; fadeValue += 5) {
  analogWrite(MotorPWM, fadeValue);
  Serial.print("Motor Speedup: ");
  Serial.println(fadeValue);
  delay(10);
}
for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
  analogWrite(MotorPWM, fadeValue);
  Serial.print("Motor Slowdown: ");
  Serial.println(fadeValue);
  delay(10);
}
}
