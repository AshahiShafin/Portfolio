void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(10,0);
Serial.println("Duty Cycle 0%");
delay(2000);
analogWrite(10,64);
Serial.println("Duty Cycle 25%");
delay(2000);
analogWrite(10,127);
Serial.println("Duty Cycle 50%");
delay(2000);
analogWrite(10,191);
Serial.println("Duty Cycle 75%");
delay(2000);
analogWrite(10,255);
Serial.println("Duty Cycle 100%");
delay(2000);
analogWrite(10,191);
Serial.println("Duty Cycle 75%");
delay(2000);
analogWrite(10,127);
Serial.println("Duty Cycle 50%");
delay(2000);
analogWrite(10,64);
Serial.println("Duty Cycle 25%");
delay(2000);
}
