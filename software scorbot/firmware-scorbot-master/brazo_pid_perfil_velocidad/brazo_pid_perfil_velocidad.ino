#include <EEPROM.h>
#include <Wire.h>
#include <digitalWriteFast.h>
#include <Wire.h>
#include <Encoder.h>
#include <PID_v1.h>
#include "pwm_frequency.h"
#include <brazo_i2c.h>

/* pines */
#define PIN_ENC1 2
#define PIN_ENC2 3
#define PIN_HOME 4
#define PIN_PWM1 10
#define PIN_PWM2 11
#define PIN_ENA  12
#define PIN_LED 13
#define CONTROL_PID_POS_MS 5

#define SERIAL_DEBUG 0
//<<<<<<< HEAD =======

#if (SERIAL_DEBUG)
#define SERIAL_DBG(x) x
#else
#define SERIAL_DBG(x)
#endif
//>>>>>>> b0d80f5452f0786c63cf6c068f7b4a29c90c92d1

struct i2c_registers_t {
  int32_t position_cmd, position;
  int8_t velocity_cmd, velocity;
  uint8_t action;
  bool action_changed;
} 
i2c_registers;

uint8_t i2c_slave_address;

/* status variables */
struct pid_status {
  long prev_pos;
  long prev_time;
  long time_delta;
  long pos_delta;  
  double input, output, setpoint;
  bool enable;
};

/* constantes: junta 2 */
int pwm_max = 128; 
int pwm_min = 35;
//int cte_PID_agg = 500;
double vel_max = 8;
double vel_min = 0;
double kp_pos = 0.003, ki_pos = 0.0005, kd_pos = 0.001;
//double agg_kp_pos = 0.0025, agg_ki_pos = 0.001, agg_kd_pos = 0.001;  //le pongo otras constantes aggresive para cuando estoy muy lejos  

/* instances */
Encoder enc(PIN_ENC1, PIN_ENC2);
pid_status pid_pos_status;
PID pid_pos(&pid_pos_status.input, &pid_pos_status.output, &pid_pos_status.setpoint, kp_pos, ki_pos, kd_pos, DIRECT); 
int home_status, prev_home_status;
bool homing = false;


void setup() {  
  /* inicializar pins */
  setPwmFrequency(PIN_PWM1, 1); // 31KHz
  setPwmFrequency(PIN_PWM2, 1); // 31KHz
  pinMode(PIN_PWM1, OUTPUT);
  pinMode(PIN_PWM2, OUTPUT);
  pinMode(PIN_ENA, OUTPUT);  
  digitalWrite(PIN_ENA, OUTPUT);

  pinMode(PIN_HOME, INPUT_PULLUP);
  prev_home_status = home_status = digitalRead(PIN_HOME);

  Serial.begin(115200);  


  pinMode(PIN_LED, OUTPUT);  
  digitalWrite(PIN_LED, LOW); // LED apagado
  delay(100);
  digitalWrite(PIN_LED, HIGH); // LED apagado
  delay(100);
  digitalWrite(PIN_LED, LOW); // LED apagado

  pid_pos.SetTunings(kp_pos, ki_pos, kd_pos);
  pid_vel_status.prev_time = pid_pos_status.prev_time = millis();

  /* initialize pid values */
  pid_pos_status.output = 0;
  pid_pos_status.input = 0;
  pid_pos_status.setpoint = 0;
  pid_pos_status.prev_pos = -9999;
  pid_pos_status.time_delta = 0;
  pid_pos_status.pos_delta = 0;

  pid_pos.SetMode(AUTOMATIC);
  pid_pos.SetOutputLimits(-(vel_max - vel_min), (vel_max - vel_min));
  pid_pos.SetSampleTime(CONTROL_PID_POS_MS);

  i2c_initialize();

  Serial.print("bienvenido a la junta "); 
  Serial.println(i2c_slave_address);
}

/******************* i2c communication *******************/
uint8_t i2c_last_address = -1;
bool i2c_is_read = false;

void i2c_set_slave_address(uint8_t addr) {
  EEPROM.write(0, addr);
}

void i2c_initialize(void) {
  i2c_registers.position = i2c_registers.position_cmd = 0;
  i2c_registers.velocity = i2c_registers.velocity_cmd = 0;
  i2c_registers.action = I2C_ACTION_VEL;
  i2c_registers.action_changed = true;

  i2c_slave_address = EEPROM.read(0); // read slave address

  Wire.begin(i2c_slave_address);
  Wire.onReceive(on_i2c_receive);
  Wire.onRequest(on_i2c_request);
}

void on_i2c_request(void) {
  switch(i2c_last_address) {
  case I2C_REG_POSITION:
    Wire.write((uint8_t*)&(i2c_registers.position), sizeof(i2c_registers.position));
    break;
  case I2C_REG_VELOCITY:
    Wire.write((uint8_t*)&(i2c_registers.velocity), sizeof(i2c_registers.velocity));
    break;
  case I2C_REG_ACTION:
    Wire.write((uint8_t*)&(i2c_registers.action), sizeof(i2c_registers.action));
    break;
  }
}

void on_i2c_receive(int bytes) {
  uint8_t c = (uint8_t)Wire.read();
  i2c_last_address = c >> 1;
  if (c & 1) return; // i2c read request
  i2c_handle_write();
}

void i2c_handle_write(void) {
  switch(i2c_last_address) {
  case I2C_REG_POSITION:
    Wire.readBytes((char*)&(i2c_registers.position_cmd), sizeof(i2c_registers.position_cmd));
    break;
  case I2C_REG_VELOCITY:
    Wire.readBytes((char*)&(i2c_registers.velocity_cmd), sizeof(i2c_registers.velocity_cmd));
    break;
  case I2C_REG_ACTION:
    Wire.readBytes((char*)&(i2c_registers.action), sizeof(i2c_registers.action));
    i2c_registers.action_changed = true;
    break;
  }
}

void i2c_update(void) {  
  if (i2c_registers.action_changed) {
    switch(i2c_registers.action) {
    case I2C_ACTION_POS:
      SERIAL_DBG(Serial.println("i2c: set pos"));
      set_pid_pos(i2c_registers.position_cmd);
      break;
    case I2C_ACTION_VEL:
      SERIAL_DBG(Serial.println("i2c: set vel"));      
      pid_pos_status.enable = false;
      set_pid_speed((double)i2c_registers.velocity_cmd / 10);      
      pid_vel.Reset();
      break;
    case I2C_ACTION_HOM:
      SERIAL_DBG(Serial.println("i2c: set homing"));            
      buscar_home();
      break;
    case I2C_ACTION_STOP:
      SERIAL_DBG(Serial.println("i2c: stop"));            
      frenar();
      break;
    }

    i2c_registers.action_changed = false;
  }

  i2c_registers.velocity = pid_vel_status.input;
  i2c_registers.position = pid_pos_status.input;
  if (homing) i2c_registers.action = I2C_ACTION_HOM;
  else {
    if (i2c_registers.action == I2C_ACTION_HOM) {
      i2c_registers.position_cmd = 0;
      i2c_registers.action = I2C_ACTION_POS;
    }
  }
}

/******************* serial communication **************/
void process_serial(void) {
  if (!Serial.available()) return;
  char c = Serial.read();
  Serial.println(c);

  if (c == 'z') set_pid_pos(10000);
  else if (c == 'x') set_pid_pos(-10000);
  else if (c == 'c') set_pid_pos(0);

  else if (c == 'a') set_speed(-1, 100);
  else if (c == 's') set_speed( 1, 100);
  else if (c == 'd') { 
    frenar(); 
  }

  else if (c == 'h') buscar_home();
}

/***************** control ****************/
void frenar(void) {
  pid_pos_status.enable = false; 
  set_speed(0, 0); 
  homing = false;
  pid_pos.Reset();
}


void set_pid_pos(int32_t pos)
{
  pid_pos_status.enable = true;
  pid_pos_status.setpoint = pos;
  pid_pos.Reset();                // chequear si tiene que ir este reset creo q no
}

void set_speed(int dir, int pwm)
{
  if (dir == 1) {
    analogWrite(PIN_PWM1, 0);
    analogWrite(PIN_PWM2, pwm);
  }
  else if (dir == -1) {
    analogWrite(PIN_PWM1, pwm);
    analogWrite(PIN_PWM2, 0);
  }
  else {
    analogWrite(PIN_PWM1, 0);
    analogWrite(PIN_PWM2, 0);
  }
}

/*******************update position**********************************/
bool pos_close_enough = false;
void update_position(void)
{
  unsigned long time = millis();
  pid_pos_status.time_delta += time - pid_pos_status.prev_time;
  pid_pos_status.prev_time = time;  

  long pos = enc.read();

  if (pid_pos_status.time_delta < CONTROL_PID_POS_MS) return;
  SERIAL_DBG(Serial.print(pid_vel_status.setpoint); 
  Serial.print(" "); 
  Serial.print(pid_vel_status.input); 
  Serial.print(" "); 
  Serial.print(pid_vel_status.output + (pid_vel_status.output < 0  ? -pwm_min : pwm_min)); 
  Serial.print(" "); 
  Serial.println(pos));

  pid_pos_status.input = pos;
  double gap = abs(pid_pos_status.setpoint - pid_pos_status.input);



  /* Selecciono el PID_agg o no  */
  //  if (pid_pos_status.enable) {
  //    if(gap < cte_PID_agg && !pos_close_enough) {
  //      pid_pos.SetTunings(kp_pos, ki_pos, kd_pos); 
  //      pid_pos.Reset();
  //      pos_close_enough = true;
  //    }
  //    else if (gap >= cte_PID_agg) {
  //      pos_close_enough = false;
  //      pid_pos.SetTunings(agg_kp_pos, agg_ki_pos, agg_kd_pos);
  //    }  //Serial.print("agg");
  //  }

  pid_pos.Compute();
  if (pid_pos_status.enable) set_pid_speed(pid_pos_status.output);
  pid_pos_status.time_delta = 0;
  //pid_pos_status.pos_delta = 0;
}


/************************buscar home*******************************/
double homing_speed = -2.0;
void buscar_home(void)
{
  prev_home_status = home_status = digitalReadFast(PIN_HOME);
  homing = true;
  pid_pos_status.enable = false;
  set_pid_speed(homing_speed); // ir en sentido negativo al home, buscando la trancision L->H
}

void set_home(void) {
  enc.write(0);
  homing = false;
  set_pid_pos(0);
}

//funciona para todos los motores menos el 4
bool border_reached = false;
bool check_home(void) { 
#if SERIAL_DEBUG
  Serial.println("homing");
#endif

  if ((abs(pid_vel_status.output) + pwm_min) == pwm_max && pid_vel_status.input == 0.0) {
    if (!border_reached) {
      set_pid_speed(-pid_vel_status.setpoint); // llegue al borde, voy en el otro sentido
      pid_vel.Reset();
      border_reached = true;
    }
  }
  else {
    border_reached = false;
    if (home_status == HIGH && prev_home_status == HIGH) { 
    }//Serial.println("quedo en 5");  // no hago nada
    else if (home_status == HIGH && prev_home_status == LOW) { 
      if (pid_vel_status.setpoint == homing_speed) { 
        set_home(); 
        return true; 
      }   
      else { 
        set_pid_speed(-pid_vel_status.setpoint); 
      }
      prev_home_status = home_status;
    }
    else if (home_status == LOW && prev_home_status == LOW);
    else if (home_status == LOW && prev_home_status == HIGH) {
      if (pid_vel_status.setpoint == -homing_speed) { 
        set_home(); 
        return true; 
      }
      else { 
      } // nada para el 2
      prev_home_status = home_status;
    }
  }

  return false;
}

/*********************************** main loop *************************************/
void loop() {
  i2c_update();

  /* imprime encoder si cambia */
  update_position();

  /* led indica home */
  int home_status_current = digitalReadFast(PIN_HOME);
  if (home_status_current == 1 && home_status == 0) {
    home_status = 1;
    digitalWriteFast(PIN_LED, HIGH);
  }
  else if (home_status_current == 0 && home_status == 1) {
    home_status = 0;
    digitalWriteFast(PIN_LED, LOW);
  }

  if (homing) {
    if (check_home()) Serial.println("iupi");
  }         

  /* procesar comandos */
  process_serial();

  //  set_speed(1, 64);
}



