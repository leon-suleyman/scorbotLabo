#include <Servo.h> 

Servo servo; // servo object representing the MG 996R servo

int receiveCommandPin = 10;    //pin through wich we receive the servo position to move to
int isClosedPin = 9;          //pin through wich we send if the claw is open (0) or closed (1)
int isHoldingPin = 8;         //pin through wich we send if we are holding (1) something or not (0) with the claw
int interruptMasterPin = 2;   //pin through wich we interrupt to read the receivePin
int interruptDebugPin = 2;    //pin through wich we switch states for debugging
int interruptSensorPin = 3;   //pin through wich we interrupt to know we catched something in the claw
int sendCommandPin = 7;        //pin through wich we send the position move command to the servo.

int pos = 85;                 //position of the servo in degrees
volatile bool caughtSomething = false; 

//TODO terminar los estados y el resto

enum {openClaw, closingClaw, closedClaw, holdingClaw, openingClaw};
volatile unsigned char stateClaw = openClaw;

void setup() {
  servo.attach(sendCommandPin); 
  pinMode(INPUT, receiveCommandPin);
  pinMode(OUTPUT, isClosedPin);
  pinMode(OUTPUT, isHoldingPin);
  attachInterrupt(digitalPinToInterrupt(interruptMasterPin), listenToCommand, RISING);
  //attachInterrupt(digitalPinToInterrupt(interruptDebugPin), debugStateSwitch, RISING);
  attachInterrupt(digitalPinToInterrupt(interruptSensorPin), effectiveCatch, RISING);


  servo.write(pos);
  
}


void loop() {
  
  switch(stateClaw){

    case openClaw:
      //la  garra está abierta y reporta que no está agarrando nada
      reportState(0,0);
      break;
    
    case closedClaw:
      //la garra está cerrada y no aagarró nada
      reportState(1,0);
      break;

    case openingClaw:
      //estamos abriendo la garra
      pos = 85;
      servo.write(pos);
      stateClaw = openClaw;
      caughtSomething = false;
      break;
    
    case holdingClaw:
      //estamos agarrando algo
      reportState(0,1);
      break;

    case closingClaw:
      //cerramos la garra
      //closingSequence();
      while (!caughtSomething && pos > 25) {
        pos -= 10;
        servo.write(pos);
        delay(60);
  }
      if(caughtSomething){
        /*pos -= 5;
        servo.write(pos);
        delay(10);

        stateClaw = holdingClaw;
        reportState(0,1);*/
      }else{
        stateClaw = closedClaw;
        reportState(1,0);
      }
      break;
  }

  delay(100);
}

void reportState(int isClosed, int isHolding){
  digitalWrite(isClosedPin, isClosed);
  digitalWrite(isHoldingPin, isHolding);
}

void closingSequence(){
  while (!caughtSomething && pos > 15) {
    pos -= 5;
    servo.write(pos);
    delay(100);
  }
}

void effectiveCatch(){
  pos -= 5;
  servo.write(pos);
  //delay(10);

  stateClaw = holdingClaw;
  reportState(0,1);
  caughtSomething = true;
}

void debugStateSwitch(){
  switch(stateClaw){
    case openClaw:
      stateClaw = closingClaw;
      break;
    case closedClaw:
      stateClaw = openingClaw;
      break;
    case holdingClaw:
      stateClaw = openingClaw;
      break;
  }
}

void listenToCommand(){
  int close_command = digitalRead(receiveCommandPin);
  if (close_command){
    stateClaw = closingClaw;
  }else{
    stateClaw = openingClaw;
  }
}