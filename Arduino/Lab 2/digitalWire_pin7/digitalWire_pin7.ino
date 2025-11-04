void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(4, HIGH);
Serial.println("RED LED On");
delay(500);
digitalWrite(4, LOW);
Serial.println("RED LED Off");
delay(1500);
}
