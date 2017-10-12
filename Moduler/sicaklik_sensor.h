/***************
  lm75 SENSÖR SÜRÜCÜSÜ
  Geliþtiren: C.T
  Tarih: 2 Nisan 2017
  Versiyon: 1.0
  ABC ÞÝRKETÝ

***************/

#ifndef __SICAKLIK_SENSOR
#define __SICAKLIK_SENSOR

/*
typedef enum temp_sensor_status_e {
	TEMP_SENSOR_OFF,
	TEMP_SENSOR_ON,
	TEMP_SENSOR_BUSY
};

*/
/*
    
*/
void temp_sensor_init();

float temp_sensor_get_temp();

void temp_sensor_power_off();

void temp_sensor_power_on();

void temp_sensor_calibrate();

int temp_sensor_get_status();



#endif
