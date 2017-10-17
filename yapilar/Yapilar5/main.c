/*******************************************************************************************
C PROGRAMLAMA E��T�M� - CO�KUN TA�DEM�R

YAPILAR (STRUCT) - 5

Yap�lar�n diziler, i�aret�iler ve fonksiyonlarla birlikte kullan�m� - Basit Bir ��renci Otomasyonu

A�IKLAMA


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

	
	ogrenci_ismi_kaydet(&ogrenciler[0], "ali", 4);
	ogrenci_ismi_kaydet(&ogrenciler[1], "veli", 5);
	ogrenci_ismi_kaydet(&ogrenciler[2], "mehmet", 7);
	ogrenci_ismi_kaydet(&ogrenciler[3], "ahmet", 6);

	ogrenci_durum_kaydet(&ogrenciler[0], DURUM_MEZUN);

	for (i = 0; i < 10; i++)
	{
		printf("Ogreci no:%d\n", ogrenciler[i].no);
		printf("Ogrenci isim:%s\n", ogrenciler[i].isim);
		printf("Ogrenci yas:%d\n", ogrenciler[i].yas);
		ogrenci_durum_yazdir(&ogrenciler[i]);
	}

	return 0;
}



