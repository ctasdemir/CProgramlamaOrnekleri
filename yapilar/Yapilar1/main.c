#include <stdio.h>
#include <string.h>
#include <stdint.h>
/*
Yapýlar-1
*/

typedef struct ogrenci_s {
	int no;
	int yas;
	char isim[10];
}ogrenci_t;

union birlik {
	uint32_t sayi;
	uint8_t dizi[4];
	float ondalik;
	uint32_t dizi2[10];
};


int main() {

	ogrenci_t ogrenci1 = { 10,15,"mustafa" };
	union birlik birlik1;

	birlik1.sayi = 1000;
	printf("Birlik boyutu: %d\n", sizeof(birlik1));
	printf("ogrenci boyutu %d\n", sizeof(ogrenci1));

	printf("bayt1=%x bayt2=%x bayt3=%x bayt4 = %x", birlik1.dizi[0], birlik1.dizi[1], birlik1.dizi[2], birlik1.dizi[3]);



	printf("sizeof:%d\n", sizeof("coskun"));


	//memcpy(ogrenci1.isim, "coskun",sizeof("coskun"));
	printf("Ogreci no:%d\n", ogrenci1.no);
	printf("Ogrenci isim:%s\n", ogrenci1.isim);
	printf("Ogrenci yas:%d\n", ogrenci1.yas);
	
	
	


	return 0;
}


