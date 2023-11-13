#include <Servo.h> 

Servo servo; // servo object representing the MG 996R servo

int interruptMasterPin = 8;   //pin through wich we interrupt to read the receivePin
int interruptDebugPin = 8;    //pin through wich we switch states for debugging
int isHoldingPin = 7;         //pin through wich we send if we are holding (1) something or not (0) with the claw
int isClosedPin = 6;          //pin through wich we send if the claw is open (0) or closed (1)
int receiveCommandPin = 5;    //pin through wich we receive the servo position to move to
int sendCommandPin = 4;        //pin through wich we send the position move command to the servo.
int interruptSensor1Pin = 3;   //pin through wich we interrupt to know we catched something in the claw
int interruptSensor2Pin = 2;   //pin through wich we interrupt to know we catched something in the claw

int pos = 85;                 //position of the servo in degrees
volatile bool caughtSomething = false; 

//TODO terminar los estados y el resto

enum {openClaw, closingClaw, closedClaw, waitingForSecondSensorClaw, holdingClaw, openingClaw};
volatile unsigned char stateClaw = openClaw;

void setup() {

  servo.attach(sendCommandPin); 
  pinMode(INPUT, receiveCommandPin);
  pinMode(OUTPUT, isClosedPin);
  pinMode(OUTPUT, isHoldingPin);
  //attachInterrupt(digitalPinToInterrupt(interruptMasterPin), listenToCommand, CHANGE);
  //attachInterrupt(digitalPinToInterrupt(interruptDebugPin), debugStateSwitch, CHANGE);
  pinMode(INPUT, interruptMasterPin);
  attachInterrupt(digitalPinToInterrupt(interruptSensor1Pin), effectiveCatch, RISING);
  attachInterrupt(digitalPinToInterrupt(interruptSensor2Pin), effectiveCatch, RISING);

  *digitalPinToPCMSK(interruptMasterPin) |= bit (digitalPinToPCMSKbit(interruptMasterPin));  // activar pin en PCMSK
  PCIFR  |= bit (digitalPinToPCICRbit(interruptMasterPin)); // limpiar flag de la interrupcion en PCIFR
  PCICR  |= bit (digitalPinToPCICRbit(interruptMasterPin)); // activar interrupcion para el grupo en PCICR


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
    case waitingForSecondSensorClaw:
      //cerramos la garra
      //closingSequence();
      while (!caughtSomething && pos > 25) {
        pos -= 10;
        servo.write(pos);
        delay(60);
      }
      if(!caughtSomething){
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
  if(stateClaw = closingClaw){
    stateClaw = waitingForSecondSensorClaw;
  }else if (stateClaw = waitingForSecondSensorClaw){
    pos -= 5;
    servo.write(pos);

    stateClaw = holdingClaw;
    reportState(0,1);
    caughtSomething = true;
  }
  
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

ISR(PCINT0_vect){
  if(digitalRead(interruptMasterPin)){
    listenToCommand();
    //debugStateSwitch();
  }
  
}