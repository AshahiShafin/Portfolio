#include <Stepper.h>

int stepsPerRevolution = -512;
int RPM = 6;

Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  myStepper.setSpeed(RPM);
  Serial.begin(9600);
  
}

void loop() {
  Serial.println("Clockwise");
  myStepper.step(stepsPerRevolution);
  Serial.println("Stopped");
  delay(2000);
}
