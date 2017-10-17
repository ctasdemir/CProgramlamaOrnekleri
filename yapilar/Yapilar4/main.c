/*******************************************************************************************
C PROGRAMLAMA E��T�M� - CO�KUN TA�DEM�R

YAPILAR (STRUCT) - 4

Yap�lar�n ��aret�ilerle birlikte kullan�m�

A�IKLAMA

Bir adet ogrenci_t tipinde struct ve iki adet bu tipe ait pointer tan�mlan�yor.
��aret�ilerin her ikisi de ayn� de�i�kenin adresini g�steriyor.
Bir i�aret�i �zerinden yap�n�n �yeleri de�i�tirildi�inde di�er i�aret�inin g�sterdi�i de�i�kenin
�yelerinin de de�i�ti�i g�r�l�yor.


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


