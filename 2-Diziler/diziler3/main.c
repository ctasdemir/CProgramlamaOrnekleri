
#include<stdio.h>
/*
	Dizinin elemanlar�n�n toplam�n�n hesaplanmas�
*/
#define DIZI_BOYUTU 10
int main()
{
	
	int a[DIZI_BOYUTU] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int i;  // indeks de�i�keni
	int toplam = 0; // toplam de�i�keni
	float ortalama = 0.0; // ortalama de�i�keni

	printf("Dizi elemanlari:\n");

	// dizi elemanlar�n� yazd�r�yoruz.
	for (i = 0; i < DIZI_BOYUTU; i++) {
		printf("dizinin %d. elemani:%d \n", i, a[i]);
		toplam = toplam + a[i];
	}
	ortalama = (float)toplam / DIZI_BOYUTU;
	printf("Dizi elemanlarinin ortalamasi:%f \n", ortalama);
}
