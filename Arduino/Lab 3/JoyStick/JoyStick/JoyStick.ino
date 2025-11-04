int x = 0;
int y = 0;
int i = 0;
int j = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
x = analogRead(A0);
y = analogRead(A1);
Serial.print(" Analog Read Value X is ");
Serial.print(x);
Serial.print(" Analog Read Value Y is ");
Serial.print(y);
i = map(x, 0, 1023, 0, 255);
j = map(y, 0, 1023, 0, 255);
Serial.print(" Analog Write X is ");
Serial.print(i);
Serial.print(" Analog Write Y is ");
Serial.println(j);
analogWrite(10, i);
analogWrite(11, j);
delay(100);
}
