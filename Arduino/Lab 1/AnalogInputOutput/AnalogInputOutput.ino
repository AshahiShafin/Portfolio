int x;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(6, 191);
x = analogRead(0);
Serial.print("Input Analog Pin 0 is :");
Serial.println(x);
}
