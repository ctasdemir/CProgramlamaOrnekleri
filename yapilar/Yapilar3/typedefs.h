#pragma once


typedef struct ogrenci_s {
	int no;
	int yas;
	char isim[10];
	enum ogrenciDurum durum;
}ogrenci_t;


enum ogrenciDurum {DURUM_KAYITLI,DURUM_NAKIL, DURUM_MEZUN};