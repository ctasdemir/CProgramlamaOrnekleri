/*******************************************************************************************
C PROGRAMLAMA E��T�M� - CO�KUN TA�DEM�R

YAPILAR (STRUCT) - 1
Struct Tan�mlama ve De�i�ken Olu�turma

********************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdint.h>

// struct tan�mlama
struct ogrenci_s {
	int no;
	int yas;
	char isim[10];
};


int main() {
	//struct de�i�keni tan�mlama
	struct ogrenci_s ogrenci1 = { 10,15,"mustafa" };
	
	
	printf("Ogreci no:%d\n", ogrenci1.no);
	printf("Ogrenci isim:%s\n", ogrenci1.isim);
	printf("Ogrenci yas:%d\n", ogrenci1.yas);
	
	return 0;
}


