#include <stdio.h>
#include <stdint.h>
#include "modul1.h"
#include "modul2.h"

int g_variable = 10;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0; 

	a = 12;
	b = 34;
	c = 45;

	printf("a=%d b=%d c=%d\n", a, b, c);
	printf("global degisken = %d\n",g_variable);

	fonksiyon_modul1();

	printf("a=%d b=%d c=%d\n", a, b, c);
	printf("global degisken = %d\n", g_variable);




	return 0;
}

