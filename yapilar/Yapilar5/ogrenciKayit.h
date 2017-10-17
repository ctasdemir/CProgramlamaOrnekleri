#pragma once
#include "typedefs.h"
#include <stdint.h>

void ogrenci_ismi_kaydet(ogrenci_t* pOgrenci, char* isim, int32_t len);
void ogrenci_no_kaydet(ogrenci_t* pOgrenci, int no);
void ogrenci_yas_kaydet(ogrenci_t* pOgrenci, int yas);
void ogrenci_durum_kaydet(ogrenci_t* pOgrenci, enum ogrenciDurum durum);
void ogrenci_durum_yazdir(ogrenci_t* pOgrenci);