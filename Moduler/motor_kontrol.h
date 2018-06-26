

/***************
  MOTOR  S�R�C�S�
  Geli�tiren: C.T
  Tarih: 2 Nisan 2017
  Versiyon: 1.0
  ABC ��RKET�

***************/

#ifndef __MOTOR_DRIVER
#define __MOTOR_DRIVER
#include "sicaklik_sensor.h"


void motor_driver_init();
void motor_driver_start();
void motor_driver_stop();
void motor_driver_set_speed(int speed);



#endif
