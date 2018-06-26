#include <stdio.h>
#include <stdint.h>
#include "motor_kontrol.h"
#include "sicaklik_sensor.h"
#include "ekran.h"

#define KART2



void delay(void);

int main()
{
	float sicaklik = 0.0;
	
	// Baþlangýç iþlemleri
	// Ekraný baþlat
	lcd_driver_init();
	// Motoru baþlat
	motor_driver_init();
	//Sýcaklýk sensörü baþlat
	temp_sensor_init();
	
	while(1)
	{

		temp_sensor_power_on();
		sicaklik = temp_sensor_get_temp();
		temp_sensor_power_off();

		lcd_driver_print(sicaklik);
		
		if(sicaklik > 25.0)
		{
		   motor_driver_start();	
		}
		else
		{
			 motor_driver_stop();
		}	
		delay();
	}
}


#ifdef KART1
void delay()
{
	uint64_t i = 0;
	
	for(i=0; i<1000000000;i++)
	{
		
	}
}
#endif

#ifdef KART2
void delay()
{
	uint64_t i = 0;

	for (i = 0; i<5000000000; i++)
	{

	}
}





#endif