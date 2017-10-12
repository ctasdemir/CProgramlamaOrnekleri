#include <stdio.h>
#include <string.h>
/*
Yapýlar-1
*/

struct ogrenci_s {
	int no;
	int yas;
	char isim[8];
};

typedef struct otomobil_s {
	int model;
	int kapi_sayisi;
	float motor_hacmi;
}otomobil_t;


int main() {

	struct ogrenci_s ogrenci1 = { 10,15,"mustafa" };
	otomobil_t oto1;

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


