#include <Servo.h> 

Servo servo; // servo object representing the MG 996R servo

#define SERIAL_DEBUG 0 //0 para modo normal 1 para mandar mensajes por el serial monitor de arduino

#if SERIAL_DEBUG
#define SERIAL_DBG(x) x
#else
#define SERIAL_DBG(x)
#endif

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

enum ClawStates { openClaw = 0 , 
                  closingClaw = 1, 
                  closedClaw = 2,
                  waitingForFirstSensorClaw = 3, 
                  waitingForSecondSensorClaw = 4, 
                  holdingClaw = 5, 
                  openingClaw = 6
                };

#define IDNAME(name) #name
const char* clawStatesStr[] = { IDNAME(openClaw) , 
                                IDNAME(closingClaw) , 
                                IDNAME(closedClaw) , 
                                IDNAME(waitingForFirstSensorClaw) ,
                                IDNAME(waitingForSecondSensorClaw) , 
                                IDNAME(holdingClaw) , 
                                IDNAME(openingClaw)
                              };
                          
volatile unsigned char stateClaw = openClaw;

void setup() {

  servo.attach(sendCommandPin); 
  pinMode(INPUT, receiveCommandPin);
  pinMode(OUTPUT, isClosedPin);
  pinMode(OUTPUT, isHoldingPin);
  //attachInterrupt(digitalPinToInterrupt(interruptMasterPin), listenToCommand, CHANGE);
  //attachInterrupt(digitalPinToInterrupt(interruptDebugPin), debugStateSwitch, CHANGE);
  pinMode(INPUT, interruptMasterPin);
  attachInterrupt(digitalPinToInterrupt(interruptSensor1Pin), effectiveCatchSensor1, RISING);
  attachInterrupt(digitalPinToInterrupt(interruptSensor2Pin), effectiveCatchSensor2, RISING);

  *digitalPinToPCMSK(interruptMasterPin) |= bit (digitalPinToPCMSKbit(interruptMasterPin));  // activar pin en PCMSK
  PCIFR  |= bit (digitalPinToPCICRbit(interruptMasterPin)); // limpiar flag de la interrupcion en PCIFR
  PCICR  |= bit (digitalPinToPCICRbit(interruptMasterPin)); // activar interrupcion para el grupo en PCICR

  Serial.begin(9600);

  SERIAL_DBG(Serial.println("bienvenide al controlador de pinza"));
  stateClaw = openClaw;
  servo.write(pos);
  SERIAL_DBG(Serial.println("empieza abierta"));

  
}

#if SERIAL_DEBUG
String serial_buffer;
void serial_process(void) {  
  while (Serial.available() > 0) {
    char received = Serial.read();
    if (received == '\n') {
      if (!serial_parse()) Serial.println("ERR unknown/incorrect command"); 
      serial_buffer = String();
    }
    else {
      serial_buffer += received;
    }
  }
}

bool serial_parse(void) {
  String command, arg;
  int idx;
  if ((idx = serial_buffer.indexOf(' ')) != -1) {
    command = serial_buffer.substring(0, idx);
    arg = serial_buffer.substring(idx + 1);
  }
  else {
    command = serial_buffer;
    command.trim();
  }
  
  if (command.length() == 1) {
    switch(command[0]) {
        case 'c' : stateClaw = closingClaw; break;
        case 'v' : stateClaw = openingClaw; break;
      }
  }
  else {
    return false;
  }
  return true;
}
#endif


void loop() {
  
  SERIAL_DBG(Serial.println("entra al loop"));
  #if SERIAL_DEBUG
    serial_process();
  #endif
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
    case waitingForFirstSensorClaw:
      //cerramos la garra
      //closingSequence();
      while (!caughtSomething && pos > 5) {
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

  SERIAL_DBG( Serial.print("Estado de los pins : "); Serial.print(isClosed); Serial.print(" , "); Serial.print(isHolding) );
  SERIAL_DBG(Serial.print(" , Estado de la garra : "); Serial.println(clawStatesStr[stateClaw]););
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

void effectiveCatchSensor1(){
  SERIAL_DBG(Serial.println("entramos a la interrupción del sensor 1"));
  if(stateClaw == closingClaw){
    stateClaw = waitingForSecondSensorClaw;
  }else if (stateClaw == waitingForFirstSensorClaw){
    pos -= 5;
    servo.write(pos);

    stateClaw = holdingClaw;
    reportState(0,1);
    caughtSomething = true;
  }
  
}

void effectiveCatchSensor2(){
  SERIAL_DBG(Serial.println("entramos a la interrupción del sensor 2"));
  if(stateClaw == closingClaw){
    stateClaw = waitingForFirstSensorClaw;
  }else if (stateClaw == waitingForSecondSensorClaw){
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
    SERIAL_DBG(Serial.println("escuchando al MEGA"));
    listenToCommand();
    //debugStateSwitch();
  }
  
}