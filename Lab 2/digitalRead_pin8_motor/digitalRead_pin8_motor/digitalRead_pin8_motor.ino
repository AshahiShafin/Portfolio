boolean flag;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7, OUTPUT);
pinMode(8, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
flag = digitalRead(8);
if(flag == false){
  digitalWrite(7, LOW);
  Serial.println("Motor On");
  }
if(flag == true){
  digitalWrite(7, HIGH);
  Serial.println("Motor Off");
  }
}
