/*******************************************************************************************
C PROGRAMLAMA E��T�M� - CO�KUN TA�DEM�R

Fonksiyonlar - 5
Kapsam ve Tan�m Aral��� Kavramlar� (Scope and Storage)

Global De�i�kenler
Lokal De�i�kenler 

Statik De�i�kenler
Otomatik De�i�kenler

********************************************************************************************/
#include <stdio.h>
#include <stdint.h>

int a, b; // global de�i�kenler

void function();

int main()
{
	/*
	   sayi1, sayi2, ondalik de�i�kenleri lokal de�i�kenlerdir. Sadece
	   main() fonksiyonu i�erisinde tan�ml�d�rlar. Ba�ka bir fonksiyondan bu de�i�kenlere
	   eri�ilemez.
	*/
	int sayi1 = 0;
	int sayi2 = 0;
	float ondalik = 1.34567;
	
	printf("sayi1=%d \n", sayi1);
	printf("sayi2=%d \n", sayi2);

	function();
	function();
	function();

	return 0;
}

void function()
{
	static int fonk_statik_deg1 = 20; // lokal statik de�i�ken
	int fonk_deg2 = 20;// lokal otomatik de�i�ken

	printf("fonk_statik_deg1=%d\n", fonk_statik_deg1);
	printf("fonk_deg2=%d\n", fonk_deg2);
	fonk_statik_deg1++;
	fonk_deg2++;

	return;
}
