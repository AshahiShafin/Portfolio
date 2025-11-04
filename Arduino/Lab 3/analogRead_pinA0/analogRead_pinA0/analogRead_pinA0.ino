int i = 0;
int j = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
i = analogRead(A0);
Serial.print(" Analog Read Value is ");
j = map(i, 0, 1023, 255, 0);
Serial.print(" Analog Write Value is ");
Serial.println(j);
analogWrite(4, j);
}
