#include <stdio.h>
#include "motor_kontrol.h"


void motor_driver_init()
{
	printf("motor init OK\n");
}


void motor_driver_start()
{	
printf("motor started OK\n");
	
}

void motor_driver_stop()
{
printf("motor stoped OK\n");
}


void motor_driver_set_speed(int speed)
{
	printf("motor speed: %d OK\n",speed);
}
