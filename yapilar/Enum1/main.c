/*******************************************************************************************
C PROGRAMLAMA E��T�M� - CO�KUN TA�DEM�R

Numaraland�rma Tipleri  (enum )  -1 
Enum tan�mlama ve de�i�ken olu�turma

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


