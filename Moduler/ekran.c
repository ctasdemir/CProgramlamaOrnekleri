#include <stdio.h>
#include "ekran.h"



void lcd_driver_init()
{
	printf("lcd init OK\n");
}

void lcd_driver_print(float temp)
{
	printf("Sicaklik:%f\n",temp);
}
