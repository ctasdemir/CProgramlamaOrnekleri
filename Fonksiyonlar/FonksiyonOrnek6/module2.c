/*******************************************************************************************
C PROGRAMLAMA EÐÝTÝMÝ - COÞKUN TAÞDEMÝR

MODUL-2

********************************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include "module2.h"

extern void module1_function3();

int module2_function1()
{
	printf("module2 function1\n");

	return 0;
}

void module2_function2()
{
	printf("module2 function2\n");
	
	//module1_function3();

	return;
}
