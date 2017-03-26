#pragma once
#include "ogrenciKayit.h"
void ogrenci_ismi_kaydet(ogrenci_t* pOgrenci, char* isim, int32_t len)
{
	memcpy(pOgrenci->isim, isim, len);
}

void ogrenci_yas_kaydet(ogrenci_t* pOgrenci, int yas)
{
	pOgrenci->yas = yas;
}


void ogrenci_no_kaydet(ogrenci_t* pOgrenci, int no)
{
	pOgrenci->no = no;
}


void ogrenci_durum_kaydet(ogrenci_t* pOgrenci, enum ogrenciDurum durum)
{
	pOgrenci->durum = durum;
}

void ogrenci_durum_yazdir(ogrenci_t* pOgrenci)
{
	switch (pOgrenci->durum)
	{

	case DURUM_KAYITLI:
		printf("Durum: DURUM_KAYITLI\n");
		break;
	case DURUM_MEZUN:
		printf("Durum: DURUM_MEZUN\n");
		break;
	case DURUM_NAKIL:
		printf("Durum: DURUM_NAKIL\n");
		break;
	default:

		break;
	}
	
}