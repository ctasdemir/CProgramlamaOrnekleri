#include <stdio.h>
#include "sicaklik_sensor.h"


float sicak_degerler[5] = {10.1,10.2,25.6,21.4,20.0};

int temp_status = 0;

void temp_sensor_init()
{
	printf("temp sensor init OK\n");
}

float temp_sensor_get_temp()
{
	static int sayac = 0;
	float sicaklik = 0.0;

	sicaklik = sicak_degerler[sayac];
	sayac++;

	if(sayac == 5)
	{
		sayac = 0;
	}

	return sicaklik;
}

void temp_sensor_power_off()
{
	printf("temp sensor power off OK\n");
	temp_status = 0;
}

void temp_sensor_power_on()
{
	printf("temp sensor power on OK\n");
	temp_status = 1;
}

void temp_sensor_calibrate()
{
	printf("temp sensor calibrated OK\n");
}

int temp_sensor_get_status()
{
	return temp_status;
}
