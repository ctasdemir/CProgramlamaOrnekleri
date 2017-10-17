/*******************************************************************************************
C PROGRAMLAMA EÐÝTÝMÝ - COÞKUN TAÞDEMÝR

YAPILAR (STRUCT) - 4

Yapýlarýn Ýþaretçilerle birlikte kullanýmý

AÇIKLAMA

Bir adet ogrenci_t tipinde struct ve iki adet bu tipe ait pointer tanýmlanýyor.
Ýþaretçilerin her ikisi de ayný deðiþkenin adresini gösteriyor.
Bir iþaretçi üzerinden yapýnýn üyeleri deðiþtirildiðinde diðer iþaretçinin gösterdiði deðiþkenin
üyelerinin de deðiþtiði görülüyor.


********************************************************************************************/
#include <stdio.h>
#include <string.h>


struct ogrenci_s {
	int no;
	int yas;
	char isim[8];
};



int main() {

	struct ogrenci_s ogrenci1 = { 10,15,"mustafa" };


	struct ogrenci_s *pOgrenci1;
	struct ogrenci_s *pOgrenci2;

	pOgrenci1 = &ogrenci1;
	pOgrenci2 = &ogrenci1;

	printf("Ogreci no:%d\n", ogrenci1.no);
	printf("Ogrenci isim:%s\n", ogrenci1.isim);
	printf("Ogrenci yas:%d\n", ogrenci1.yas);
	
	printf("Ogreci no:%d\n", pOgrenci1->no);
	printf("Ogrenci isim:%s\n", pOgrenci1->isim);
	printf("Ogrenci yas:%d\n", pOgrenci1->yas);

	printf("Ogreci no:%d\n", pOgrenci2->no);
	printf("Ogrenci isim:%s\n", pOgrenci2->isim);
	printf("Ogrenci yas:%d\n", pOgrenci2->yas);

	printf("sizeof:%d", sizeof(ogrenci1));
	
	return 0;
}


