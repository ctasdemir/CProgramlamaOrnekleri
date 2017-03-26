#include <stdio.h>
/*
Pointer aritmetik örneði
*/



int main() {

	int  degisken = 120;
	int  *pPointer = NULL;

	
	pPointer = &degisken;



		printf("Degiskenin degeri: %d\n", *pPointer);
		printf("Degiskenin adresi: %x\n", &degisken);
		printf("isaretcinin gosterdigi adres: %x\n", pPointer);
		pPointer++;
		printf("isaretcinin gosterdigi adres: %x\n", pPointer);
		printf("Degiskenin degeri: %d\n", *pPointer);
		

	

	return 0;
}