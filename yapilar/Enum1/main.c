/*******************************************************************************************
C PROGRAMLAMA EÐÝTÝMÝ - COÞKUN TAÞDEMÝR

Numaralandýrma Tipleri  (enum )  -1 
Enum tanýmlama ve deðiþken oluþturma

********************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdint.h>

enum COLOR {RED, GREEN, YELLOW, BLUE};

int main() {

	enum COLOR clr;

	clr = GREEN;

	printf("Color=%d\n", clr);

	

	return 0;
}


