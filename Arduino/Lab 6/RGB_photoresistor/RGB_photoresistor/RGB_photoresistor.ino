#define red 4
#define green 3
#define blue 2

int redValue;
int greenValue;
int blueValue;
int photoresistor;


void Setup(){
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
}

void loop() {
  photoresistor = analogRead(A0);
  photoresistor = constrain(photoresistor, 0, 100);
  if (photoresistor >=66){
    Serial.println("Green");
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
    }
  if (photoresistor > 33 && photoresistor < 66){
    Serial.println("Blue");
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
    }
  if (photoresistor <= 33){
    Serial.println("Red");
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    }  
}
