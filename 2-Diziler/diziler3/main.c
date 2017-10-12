
#include<stdio.h>
/*
	Dizinin elemanlarýnýn toplamýnýn hesaplanmasý
*/
#define DIZI_BOYUTU 10
int main()
{
	
	int a[DIZI_BOYUTU] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int i;  // indeks deðiþkeni
	int toplam = 0; // toplam deðiþkeni
	float ortalama = 0.0; // ortalama deðiþkeni

	printf("Dizi elemanlari:\n");

	// dizi elemanlarýný yazdýrýyoruz.
	for (i = 0; i < DIZI_BOYUTU; i++) {
		printf("dizinin %d. elemani:%d \n", i, a[i]);
		toplam = toplam + a[i];
	}
	ortalama = (float)toplam / DIZI_BOYUTU;
	printf("Dizi elemanlarinin ortalamasi:%f \n", ortalama);
}
