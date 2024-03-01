#ifndef __BRAZO_I2C_H__
#define __BRAZO_I2C_H__

#define I2C_REG_POSITION 0 // 4 bytes signed
#define I2C_REG_VELOCITY 1 // 1 bytes signed
#define I2C_REG_ACTION 2 // 1 byte unsigned

// (int16_t) pwm_max, pwm_min, cte_PID_agg, (float)kp_vel, ki_vel, kd_vel, vel_max, vel_min, kp_pos, ki_pos, kd_pos, agg_kp_pos
// agg_ki_pos, agg_kd_pos
#define I2C_REG_CONSTANTS_A 3 // 30 bytes 
#define I2C_REG_CONSTANTS_B 4 // 20 bytes 


#define I2C_ACTION_POS 0
#define I2C_ACTION_VEL 1
#define I2C_ACTION_HOM 2 // (w: iniciar homing, r: si llego)
#define I2C_ACTION_STOP 3

struct pid_constants_t {
  /* sent as PART A */
  int16_t pwm_max, pwm_min, cte_PID_agg;
  float kp_vel, ki_vel, kd_vel, vel_max, vel_min, kp_pos;
  /* sent as PART B */
  float ki_pos, kd_pos, agg_kp_pos, agg_ki_pos, agg_kd_pos;
};

#endif
