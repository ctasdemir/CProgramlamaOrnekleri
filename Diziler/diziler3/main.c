#include "stdafx.h"
#include<stdio.h>
/*
	Dizinin elemanlarının toplamının hesaplanması
*/
#define DIZI_BOYUTU 10
int main()
{
	
	int a[DIZI_BOYUTU] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int i;  // indeks değişkeni
	int toplam = 0; // toplam değişkeni
	float ortalama; // ortalama değişkeni

	printf("Dizi elemanlari:\n");

	// dizi elemanlarını yazdırıyoruz.
	for (i = 0; i < DIZI_BOYUTU; i++) {
		printf("dizinin %d. elemani:%d \n", i, a[i]);
		toplam = toplam + a[i];
	}
	ortalama = toplam / DIZI_BOYUTU;
	printf("Dizi elemanlarinin ortalamasi:%f \n", ortalama);
}
