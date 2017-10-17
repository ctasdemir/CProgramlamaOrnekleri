/*******************************************************************************************
C PROGRAMLAMA EÐÝTÝMÝ - COÞKUN TAÞDEMÝR

YAPILAR (STRUCT) - 4

Yapýlarý dizi þeklinde tanýmlama ve kullanma

********************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "typedefs.h"


int main() {
	int32_t i = 0;
	ogrenci_t ogrenciler[10] = { 0 };

	for (i = 0; i < 10; i++)
	{
		ogrenciler[i].no = i;
		ogrenciler[i].yas = 15;
		ogrenciler[i].durum = DURUM_KAYITLI;
	}


	for (i = 0; i < 10; i++)
	{
		printf("Ogreci no:%d\n", ogrenciler[i].no);
		printf("Ogrenci isim:%s\n", ogrenciler[i].isim);
		printf("Ogrenci yas:%d\n", ogrenciler[i].yas);
		ogrenci_durum_yazdir(&ogrenciler[i]);
	}
	
	
	return 0;
}



