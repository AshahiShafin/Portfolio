int Motor1APWM = 10;
int Motor1BPWM = 11;
int Motor2APWM = 5;
int Motor2BPWM = 6;
void setup() {
  Serial.begin(9600);
}
void loop() {
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(Motor1APWM, fadeValue);
    analogWrite(Motor1BPWM, 0);
    analogWrite(Motor2APWM, fadeValue);
    analogWrite(Motor2BPWM, 0);
    Serial.print("Motor 1 Clockwise Speedup ");
    Serial.print("Motor 2 Clockwise Speedup PWM: ");
    Serial.println(fadeValue);
    delay(10);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(Motor1APWM, fadeValue);
    analogWrite(Motor1BPWM, 0);
    analogWrite(Motor2APWM, fadeValue);
    analogWrite(Motor2BPWM, 0);
    Serial.print("Motor 1 Clockwise Slowdown");
    Serial.print("Motor 2 Clockwise Slowdown PWM: ");
    Serial.println(fadeValue);
    delay(10);
  }
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(Motor1APWM, 0);
    analogWrite(Motor1BPWM, fadeValue);
    analogWrite(Motor2APWM, 0);
    analogWrite(Motor2BPWM, fadeValue);
    Serial.print("Motor 1 Counter Clockwise Speedup ");
    Serial.print("Motor 2 Counter Clockwise Speedup PWM: ");
    Serial.println(fadeValue);
    delay(10);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(Motor1APWM, 0);
    analogWrite(Motor1BPWM, fadeValue);
    analogWrite(Motor2APWM, 0);
    analogWrite(Motor2BPWM, fadeValue);
    Serial.print("Motor 1 Counter Clockwise Slowdown ");
    Serial.print("Motor 2 Counter Clockwise Slowdown PWM: ");
    Serial.println(fadeValue);
    delay(10);
  }
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(Motor1APWM, 0);
    analogWrite(Motor1BPWM, fadeValue);
    analogWrite(Motor2APWM, fadeValue);
    analogWrite(Motor2BPWM, 0);
    Serial.print("Motor 1 Counter Clockwise Speedup ");
    Serial.print("Motor 2 Clockwise Speedup PWM: ");
    Serial.println(fadeValue);
    delay(10);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(Motor1APWM, 0);
    analogWrite(Motor1BPWM, fadeValue);
    analogWrite(Motor2APWM, fadeValue);
    analogWrite(Motor2BPWM, 0);
    Serial.print("Motor 1 Counter Clockwise Slowdow ");
    Serial.print("Motor 2 Clockwise Slowdown PWM: ");
    Serial.println(fadeValue);
    delay(10);
  }
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(Motor1APWM, fadeValue);
    analogWrite(Motor1BPWM, 0);
    analogWrite(Motor2APWM, 0);
    analogWrite(Motor2BPWM, fadeValue);
    Serial.print("Motor 1 Clockwise Speedup ");
    Serial.print("Motor 2 Counter Clockwise Speedup PWM: ");
    Serial.println(fadeValue);
    delay(10);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(Motor1APWM, fadeValue);
    analogWrite(Motor1BPWM, 0);
    analogWrite(Motor2APWM, 0);
    analogWrite(Motor2BPWM, fadeValue);
    Serial.print("Motor 1 Clockwise Slowdown ");
    Serial.print("Motor 2 Counter Clockwise Slowdown PWM: ");
    Serial.println(fadeValue);
    delay(10);
  }
}
