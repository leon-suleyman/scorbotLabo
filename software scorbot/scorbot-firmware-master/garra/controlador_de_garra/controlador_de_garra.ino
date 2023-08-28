#include <Servo.h> 

Servo servo; // servo object representing the MG 996R servo

int pos = 90;               //position of the servo in degrees
int receiveCommandPin = 0;  //pin through wich we receive the servo position to move to
int sendConfirmPin = 0;     //pin through wich we send confirmation of how we succesfully moved to a position
int interruptPin = 2;       //pin through wich we interrupt to read the receivePin
int sendCommandPin = 3      //pin through wich we send the position move command to the servo.

void setup() {
  servo.attach(sendCommandPin); // servo is wired to Arduino on digital pin 3
  pinMode(INPUT, receiveCommandPin);
  pinMode(OUTPUT, sendConfirmPin);
  attachInterrupt(digitalPinToInterrupt(interruptPin), listenToCommand, RISING);
  
}


void loop() {
  
  servo.write(pos);
  digitalWrite(sendConfirmPin, 1);

}

void listenToCommand(){
  pos = digitalRead(receiveCommandPin);
  if(pos == 90){
    servo.write(pos);
    digitalWrite(sendConfirmPin, 1);
  }
}