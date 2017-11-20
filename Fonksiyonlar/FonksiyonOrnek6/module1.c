/*******************************************************************************************
C PROGRAMLAMA EÐÝTÝMÝ - COÞKUN TAÞDEMÝR

MODUL-1

********************************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include "module1.h"

static void module1_function3();
extern int a;
extern int b;


void module1_function1()
{
	printf("module1 function1\n");
	printf("a= %d, b=%d\n", a, b);

	return 0;
}

void module1_function2()
{
	printf("module1 function2\n");

	module1_function3();

	return;
}


static void module1_function3()
{
	printf("module1 function3");
}