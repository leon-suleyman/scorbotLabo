#ifndef __BRAZO_I2C_H__
#define __BRAZO_I2C_H__

#define I2C_REG_POSITION 0 // 4 bytes signed
#define I2C_REG_VELOCITY 1 // 1 bytes signed
#define I2C_REG_ACTION 2 // 1 byte unsigned

#define I2C_ACTION_POS 0
#define I2C_ACTION_VEL 1
#define I2C_ACTION_HOM 2 // (w: iniciar homing, r: si llego)
#define I2C_ACTION_STOP 3

#endif
