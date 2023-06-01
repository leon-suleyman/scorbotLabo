#include <Encoder.h>
Encoder enc1(18, 23), enc2(19, 31), enc3(20, 39), enc4(21, 47), enc5(2, 50);
Encoder encoders[5] = { enc1, enc2, enc3, enc4, enc5 };
long encoder_values[] = { -999, -999, -999, -999, -999 };

/* definicion de pines */
/*const int EncA[] = { 18, 19, 20, 21, 6 };
const int EncB[] = { 23, 31, 39, 47, 50 };*/
const int Home[] = { 25, 33, 41, 49, 52 };
const int DriverA[] = { 27, 35, 43, 51, 48 }; // pin direccion A driver 
const int DriverB[] = { 29, 37, 45, 53, 46 }; // pin direccion B driver 
const int PWM[] = { 3, 4, 5, 6, 7 }; // pin PWM

int LED = 13; // pin de LED de placa
int LED2 = 22;

// 44 no conectado
const int botonUP[] = { 40, 36, 30, 32, 24};
const int botonDOWN[] = { 42, 38, 34, 28, 26 };

const int motor_speed1[] = { 128, 100, 200, 180, 90 }; // velocidad (0,255) de motor (duty PWM)
const int motor_speed2[] = { 128, 100, 140, 200, 90 }; // velocidad (0,255) de motor (duty PWM)
const int cant_motors = 5; // cant de motores definidos en las listas de arriba

void setup() {
  // indicador de booteo, prendo el led de la placa
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
  
  pinMode(LED2, OUTPUT);
  digitalWrite(LED2, HIGH);
  
  for (int i = 0; i < cant_motors; i++) {
    pinMode(PWM[i], OUTPUT); // setea pin PWM como output
    analogWrite(PWM[i], 0); // PWM con duty 0 inicialmente

    pinMode(DriverA[i], OUTPUT); // setea pines direccion driver
    pinMode(DriverB[i], OUTPUT); // como output
    digitalWrite(DriverA[i], HIGH); // las pongo en HIGH
    digitalWrite(DriverB[i], HIGH); // para frenar los motores
    
    pinMode(botonUP[i], INPUT); // pin conectado a boton como input
    digitalWrite(botonUP[i], HIGH); // habilito el pull-up interno
    pinMode(botonDOWN[i], INPUT); // idem boton opuesto
    digitalWrite(botonDOWN[i], HIGH); // idem
    
    pinMode(Home[i], INPUT);
    digitalWrite(Home[i], HIGH);    
  }
  
  Serial.begin(115200);
  Serial.println("Hola =)");
}


void set_motor(int i, int dir) {
  if (dir == -1) {
    digitalWrite(DriverA[i], LOW);
    digitalWrite(DriverB[i], HIGH);  
    analogWrite(PWM[i], motor_speed1[i]);
  }
  else if (dir == 1) {
    digitalWrite(DriverA[i], HIGH);
    digitalWrite(DriverB[i], LOW);  
    analogWrite(PWM[i], motor_speed2[i]);
  }
  else {
    digitalWrite(DriverA[i], HIGH);
    digitalWrite(DriverB[i], HIGH);  
    analogWrite(PWM[i], 0);   
  }
}

void loop() {
  // recorre los 5 motores, chequeando los botones coorespondientes del control remoto
  // si ninguno de los dos esta apretado, frena el motor
  //digitalWrite(LED2, HIGH);
/*  if (digitalRead(botonDOWN[4]) == LOW) digitalWrite(LED2, LOW);
  else digitalWrite(LED2, HIGH);*/
  
  int motor_prueba = 2;
  long new_val = encoders[motor_prueba].read();
  if (new_val != encoder_values[motor_prueba]) {
    /*Serial.print("motor ");
    Serial.print(motor_prueba);
    Serial.print(": ");
    Serial.print(new_val);
    Serial.println();*/
    encoder_values[motor_prueba] = new_val;
  }
  
  if (Serial.available()) {
    Serial.read();
    Serial.print("motor: ");
    Serial.print(encoder_values[motor_prueba]);
    Serial.println();
    //encoders[motor_prueba].write(0);
  }

  #if 1
  bool any_button = false;
  for (int i = 0; i < cant_motors; i++) {
    // leer encoder

    if (digitalRead(botonUP[i]) == LOW) {
      set_motor(i, -1);
      any_button = true;
    }
    else if (digitalRead(botonDOWN[i]) == LOW) {
      set_motor(i, 1);
      any_button = true;
    }
    else {
      set_motor(i, 0); 
    }
  }
  if (!any_button) {
    digitalWrite(LED2, LOW);
    digitalWrite(LED, LOW);
  }
  else {
    digitalWrite(LED, HIGH);
    digitalWrite(LED2, HIGH);
  }
  #endif
}
