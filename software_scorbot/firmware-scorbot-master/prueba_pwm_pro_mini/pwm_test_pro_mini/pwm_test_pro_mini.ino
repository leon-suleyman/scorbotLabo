#include <EEPROM.h>
#include <Wire.h>
#include <digitalWriteFast.h>
#include <Wire.h>
#include <Encoder.h>
#include <PID_v1.h>
#include "pwm_frequency.h"
#include "brazo_i2c.h"

#define PIN_ENC1 2
#define PIN_ENC2 3
#define PIN_HOME 4
#define PIN_PWM1 10
#define PIN_PWM2 11
#define PIN_ENA  12
#define PIN_LED 13
#define CONTROL_PID_VEL_MS 5
#define CONTROL_PID_POS_MS 50

struct pid_status {
  long prev_pos;
  long prev_time;
  long time_delta;
  long pos_delta;  
  double input, output, setpoint;
  bool enable;
};

void setup() {
  // put your setup code here, to run once:
  /* inicializar pins */
  setPwmFrequency(PIN_PWM1, 1); // 31KHz
  setPwmFrequency(PIN_PWM2, 1); // 31KHz
  pinMode(PIN_PWM1, OUTPUT);
  pinMode(PIN_PWM2, OUTPUT);

  /* blinkear el LED */
  pinMode(PIN_LED, OUTPUT);  
  digitalWrite(PIN_LED, LOW); // LED apagado
  delay(100);
  digitalWrite(PIN_LED, HIGH); // LED apagado
  delay(100);
  digitalWrite(PIN_LED, LOW); // LED apagado

  analogWrite(PIN_PWM2, -150);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  
  //analogWrite(PIN_PWM2, 5);


  //analogWrite(PIN_PWM1, 5);
  //analogWrite(PIN_PWM2, 0);


}
