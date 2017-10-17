/*******************************************************************************************
C PROGRAMLAMA EÐÝTÝMÝ - COÞKUN TAÞDEMÝR

YAPILAR (STRUCT) - 1
Struct Tanýmlama ve Deðiþken Oluþturma

********************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdint.h>

// struct tanýmlama
struct ogrenci_s {
	int no;
	int yas;
	char isim[10];
};


int main() {
	//struct deðiþkeni tanýmlama
	struct ogrenci_s ogrenci1 = { 10,15,"mustafa" };
	
	
	printf("Ogreci no:%d\n", ogrenci1.no);
	printf("Ogrenci isim:%s\n", ogrenci1.isim);
	printf("Ogrenci yas:%d\n", ogrenci1.yas);
	
	return 0;
}


