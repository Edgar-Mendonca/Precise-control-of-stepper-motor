#include <Stepper.h>

const int buttonPin1 = 2; 
const int buttonPin2 = 3; 

const int stepsPerRevolution = 1000;
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

int buttonState1 = 0;
int buttonState2 = 0;

void setup() {
  myStepper.setSpeed(60);
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
 buttonState1 = digitalRead(buttonPin1);
 buttonState2 = digitalRead(buttonPin2);

  if (buttonState1 == HIGH) {
  myStepper.step(stepsPerRevolution);
  delay(500);
  }

  if (buttonState2 == HIGH) {
  myStepper.step(-stepsPerRevolution);
  delay(500);
  }
  
}

