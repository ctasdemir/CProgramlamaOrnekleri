#include <stdio.h>
#include <stdint.h>

/*
	ASCII TABLOSU
*/


int main()
{
	char kar = 'A';
	int i = 0;
	
	for (i = 0; i < 255; i++)
	{
		printf("Karakter=%c \tASCII Degeri = %d\n", i, i);
	}
	
	return 0;
}


