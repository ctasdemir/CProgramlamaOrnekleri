/*******************************************************************************************
C PROGRAMLAMA EÐÝTÝMÝ - COÞKUN TAÞDEMÝR

BÝRLÝKLER (union )  -1 
Union tanýmlama ve deðiþken oluþturma

********************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdint.h>

// union tanýmlama



union birlik {
	uint32_t sayi;
	uint8_t dizi[4];
	float ondalik;
	uint32_t dizi2[10];
};


int main() {

	union birlik birlik1;

	birlik1.sayi = 1000;

	printf("Birlik boyutu: %d\n", sizeof(birlik1));
	
	printf("sayi= %x \n", birlik1.sayi);
	printf("bayt1=%x bayt2=%x bayt3=%x bayt4 = %x", birlik1.dizi[0], birlik1.dizi[1], birlik1.dizi[2], birlik1.dizi[3]);
	printf("sizeof:%d\n", sizeof("coskun"));

	return 0;
}


