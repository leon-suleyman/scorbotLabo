#include <EEPROM.h>
#include <Wire.h>
#include <digitalWriteFast.h>
#include <Wire.h>
#include <Encoder.h>
#include <PID_v1.h>
#include "pwm_frequency.h"
#include "brazo_i2c.h"

/* pines */
#define PIN_ENC1 2
#define PIN_ENC2 3
#define PIN_HOME 4
#define PIN_PWM1 10
#define PIN_PWM2 11
#define PIN_ENA  12
#define PIN_LED 13
#define CONTROL_PID_VEL_MS 5
#define CONTROL_PID_POS_MS 50

/* EEPROM data */
#define EEPROM_JOINT_ADDRESS 0
#define EEPROM_CONSTANTS 1

#define SERIAL_DEBUG 0

#if (SERIAL_DEBUG)
#define SERIAL_DBG(x) x
#else
#define SERIAL_DBG(x)
#endif

bool constants_changed = false;

struct i2c_registers_t {
  int32_t position_cmd, position;
  int8_t velocity_cmd, velocity;
  uint8_t action;
  bool action_changed;
} i2c_registers;

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
struct pid_constants_t i2c_pid_constants, pid_constants;

/* instances */
Encoder enc(PIN_ENC1, PIN_ENC2);
pid_status pid_vel_status, pid_pos_status;
PID pid_vel(&pid_vel_status.input, &pid_vel_status.output, &pid_vel_status.setpoint, 0, 0, 0, DIRECT);
PID pid_pos(&pid_pos_status.input, &pid_pos_status.output, &pid_pos_status.setpoint, 0, 0, 0, DIRECT);
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
    
  /* inicializa serial */
  Serial.begin(115200);  
  
  /* blinkear el LED */
  pinMode(PIN_LED, OUTPUT);  
  digitalWrite(PIN_LED, LOW); // LED apagado
  delay(100);
  digitalWrite(PIN_LED, HIGH); // LED apagado
  delay(100);
  digitalWrite(PIN_LED, LOW); // LED apagado
  
  pid_vel_status.prev_time = pid_pos_status.prev_time = millis();

  /* initialize pid values */  
  pid_vel_status.output = pid_pos_status.output = 0;
  pid_vel_status.input = pid_pos_status.input = 0;
  pid_vel_status.setpoint = pid_pos_status.setpoint = 0;
  pid_vel_status.prev_pos = pid_pos_status.prev_pos = 0;
  pid_vel_status.time_delta = pid_pos_status.time_delta = 0;
  pid_vel_status.pos_delta = pid_pos_status.pos_delta = 0;

  pid_pos.SetMode(AUTOMATIC);
  pid_pos.SetSampleTime(CONTROL_PID_POS_MS);
  
  pid_vel.SetMode(AUTOMATIC);
  pid_vel.SetSampleTime(CONTROL_PID_VEL_MS);
  
  //escribe el slave address en la memoria EEPROM
  //i2c_set_slave_address(2);

  /*
  //lee la memoria EEPROM de uno ya escrito, para buscar contantes.
  int16_t pwm_max, pwm_min, cte_PID_agg;
  float kp_vel, ki_vel, kd_vel, vel_max, vel_min, kp_pos;
  float ki_pos, kd_pos, agg_kp_pos, agg_ki_pos, agg_kd_pos;
  EEPROM.get(EEPROM_CONSTANTS, pid_constants);
  SERIAL_DBG(Serial.print("pwm_max :"); Serial.println(pid_constants.pwm_max));
  SERIAL_DBG(Serial.print("pwm_min :"); Serial.println(pid_constants.pwm_min));
  SERIAL_DBG(Serial.print("cte_PID_agg :"); Serial.println(pid_constants.cte_PID_agg));
  SERIAL_DBG(Serial.print("kp_vel :"); Serial.println(pid_constants.kp_vel));
  SERIAL_DBG(Serial.print("ki_vel :"); Serial.println(pid_constants.ki_vel));
  SERIAL_DBG(Serial.print("kd_vel :"); Serial.println(pid_constants.kd_vel));
  SERIAL_DBG(Serial.print("vel_max :"); Serial.println(pid_constants.vel_max));
  SERIAL_DBG(Serial.print("vel_min :"); Serial.println(pid_constants.vel_min));
  SERIAL_DBG(Serial.print("kp_pos :"); Serial.println(pid_constants.kp_pos));
  SERIAL_DBG(Serial.print("ki_pos :"); Serial.println(pid_constants.ki_pos));
  SERIAL_DBG(Serial.print("kd_pos :"); Serial.println(pid_constants.kd_pos));
  SERIAL_DBG(Serial.print("agg_kp_pos :"); Serial.println(pid_constants.agg_kp_pos));
  SERIAL_DBG(Serial.print("agg_ki_pos :"); Serial.println(pid_constants.agg_ki_pos));
  SERIAL_DBG(Serial.print("agg_kd_pos :"); Serial.println(pid_constants.agg_kd_pos));
  */

  
  //escribe en la memoria EEPROM las constantes (para cargar un micro nuevo)
  /*
  pid_constants.pwm_max = 128;
  pid_constants.pwm_min = 45;
  pid_constants.cte_PID_agg = 0;
  pid_constants.kp_vel = 10.00;
  pid_constants.ki_vel = 0.50;
  pid_constants.kd_vel = 0.01;
  pid_constants.vel_max = 8.00;
  pid_constants.vel_min = 0.00;
  pid_constants.kp_pos = 0.05;
  pid_constants.ki_pos = 0.00;
  pid_constants.kd_pos = 0.00;
  pid_constants.agg_kp_pos = 1.50;
  pid_constants.agg_ki_pos = 1.00;
  pid_constants.agg_kd_pos = 0.00;

  EEPROM.put(EEPROM_CONSTANTS, pid_constants);
  pid_set_constants();
  */

  pid_read_constants();
  
  //set_speed(1, 64);
  /*delay(1000);
  set_speed(0,0);*/
    
  //i2c_set_slave_address(4);
  i2c_initialize();
  
  Serial.print("bienvenido a la junta "); Serial.println(i2c_slave_address);
}

/******************* i2c communication *******************/
uint8_t i2c_last_address = -1;
bool i2c_is_read = false;

void i2c_set_slave_address(uint8_t addr) {
  EEPROM.write(EEPROM_JOINT_ADDRESS, addr);
}

void i2c_initialize(void) {
  i2c_registers.position = i2c_registers.position_cmd = 0;
  i2c_registers.velocity = i2c_registers.velocity_cmd = 0;
  i2c_registers.action = I2C_ACTION_VEL;
  i2c_registers.action_changed = true;
  
  i2c_slave_address = EEPROM.read(EEPROM_JOINT_ADDRESS); // read slave address

  Wire.begin(i2c_slave_address);
  Wire.setClock(400000L);
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
    case I2C_REG_CONSTANTS_A:
      Wire.readBytes((char*)&(i2c_pid_constants), 30);
    break;
    case I2C_REG_CONSTANTS_B:
      Wire.readBytes((char*)&(i2c_pid_constants.ki_pos), 20);
      constants_changed = true;      
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
        set_pid_speed((double)(i2c_registers.velocity_cmd / 16));      
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
  
  else if (c == 'q') {   pid_pos_status.enable = false; set_pid_speed(5); pid_vel.Reset(); }
  else if (c == 'w') {   pid_pos_status.enable = false; set_pid_speed(-5); pid_vel.Reset(); }
  else if (c == 'e') {   pid_pos_status.enable = false; set_pid_speed(0); pid_vel.Reset(); }

  else if (c == 'a') set_speed(-1, 100);
  else if (c == 's') set_speed( 1, 100);
  else if (c == 'd') { frenar(); }
  
  else if (c == 'h') buscar_home();
}

/***************** control ****************/
void pid_set_constants(void)
{
  pid_pos.SetOutputLimits(-(pid_constants.vel_max - pid_constants.vel_min), (pid_constants.vel_max - pid_constants.vel_min));  
  pid_vel.SetOutputLimits(-(pid_constants.pwm_max - pid_constants.pwm_min), (pid_constants.pwm_max - pid_constants.pwm_min));
  pid_pos.SetTunings(pid_constants.kp_pos, pid_constants.ki_pos, pid_constants.kd_pos); 
  pid_vel.SetTunings(pid_constants.kp_vel, pid_constants.ki_vel, pid_constants.kd_vel);           
    
  pid_pos.Reset();
  pid_vel.Reset();
}

void pid_read_constants(void)
{
  Serial.println("Leyendo constantes");
  EEPROM.get(EEPROM_CONSTANTS, pid_constants);
  pid_set_constants();
}

void pid_update_constants(void)
{
  Serial.println("Recibiendo constantes");
  pid_constants = i2c_pid_constants;
  EEPROM.put(EEPROM_CONSTANTS, pid_constants);
  pid_set_constants();
  constants_changed = false;  
}

void frenar(void) {
  pid_pos_status.enable = pid_vel_status.enable = false; set_speed(0, 0); homing = false;
  pid_vel.Reset();
  pid_pos.Reset();
}


void set_pid_pos(int32_t pos)
{
  pid_pos_status.enable = true;
  if (pid_pos_status.setpoint != pos) pid_pos.Reset();
  pid_pos_status.setpoint = pos;
}

void set_pid_speed(double pid_speed)
{
  pid_vel_status.enable = true;
  if (pid_vel_status.setpoint != pid_speed) pid_vel.Reset();  
  pid_vel_status.setpoint = pid_speed;
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
  SERIAL_DBG(Serial.print(pid_vel_status.setpoint); Serial.print(" "); Serial.print(pid_vel_status.input); Serial.print(" "); Serial.print(pid_vel_status.output + (pid_vel_status.output < 0  ? -pid_constants.pwm_min : pid_constants.pwm_min)); Serial.print(" "); Serial.println(pos));

  pid_pos_status.input = pos;
  double gap = abs(pid_pos_status.setpoint - pid_pos_status.input);
  
  //if (gap < cte_PID_agg) Serial.println("normal");
  
  if (pid_pos_status.enable) {
    if(gap < pid_constants.cte_PID_agg && !pos_close_enough) {
      Serial.print("NO agresivo");      
      pid_pos.SetTunings(pid_constants.kp_pos, pid_constants.ki_pos, pid_constants.kd_pos); 
      pid_pos.Reset();
      pos_close_enough = true;
    }
    else if (gap >= pid_constants.cte_PID_agg && pos_close_enough) {
      Serial.print("aggresivo");
      pos_close_enough = false;
      pid_pos.SetTunings(pid_constants.agg_kp_pos, pid_constants.agg_ki_pos, pid_constants.agg_kd_pos);
      pid_pos.Reset();
    }  
  }
  
  pid_pos.Compute();
  if (pid_pos_status.enable) set_pid_speed(pid_pos_status.output);
  pid_pos_status.time_delta = 0;
  //pid_pos_status.pos_delta = 0;
}

/*******************update vel**********************************/
void update_vel(void) 
{
  unsigned long time = millis();
  pid_vel_status.time_delta += time - pid_vel_status.prev_time;
  pid_vel_status.prev_time = time;  

  long pos = enc.read();
  pid_vel_status.pos_delta += pos - pid_vel_status.prev_pos;
  pid_vel_status.prev_pos = pos;    
  
  if (pid_vel_status.time_delta < CONTROL_PID_VEL_MS) return;
  //Serial.print((double)pid_vel_status.pos_delta); Serial.print(" "); Serial.println((double)pid_vel_status.time_delta);
  pid_vel_status.input = (double)pid_vel_status.pos_delta / (double)pid_vel_status.time_delta; // cuenta encoder por ms
  pid_vel.Compute();  
  if (pid_vel_status.enable) set_speed((pid_vel_status.output < 0 ? -1 : 1), (int)abs(pid_vel_status.output) + pid_constants.pwm_min);
  
  pid_vel_status.time_delta = 0;
  pid_vel_status.pos_delta = 0;
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

  if ((abs(pid_vel_status.output) + pid_constants.pwm_min) == pid_constants.pwm_max && pid_vel_status.input == 0.0) {
    if (!border_reached) {
      set_pid_speed(-pid_vel_status.setpoint); // llegue al borde, voy en el otro sentido
      pid_vel.Reset();
      border_reached = true;
    }
  }
  else {
    border_reached = false;
    if (home_status == HIGH && prev_home_status == HIGH) { }//Serial.println("quedo en 5");  // no hago nada
    else if (home_status == HIGH && prev_home_status == LOW) { 
      if (pid_vel_status.setpoint == homing_speed) { set_home(); return true; }   
      else { set_pid_speed(-pid_vel_status.setpoint); }
      prev_home_status = home_status;
    }
    else if (home_status == LOW && prev_home_status == LOW);
    else if (home_status == LOW && prev_home_status == HIGH) {
      if (pid_vel_status.setpoint == -homing_speed) { set_home(); return true; }
      else { } // nada para el 2
      prev_home_status = home_status;
    }
  }
  
  return false;
}

/*********************************** main loop *************************************/
void loop() {
  i2c_update();
  
  /* actualiza las constantes del PID si cambiaron */
  if (constants_changed) pid_update_constants();
  
  /* imprime encoder si cambia */
  update_position();
  update_vel();
  
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


