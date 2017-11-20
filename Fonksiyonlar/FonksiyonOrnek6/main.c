/*******************************************************************************************
C PROGRAMLAMA E��T�M� - CO�KUN TA�DEM�R

Fonksiyonlar - 6
Mod�ller olu�turma

Mod�l-1 : modul1.h modul1.c
Mod�l-2 : modul2.h modul2.c

********************************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include "module1.h" // <=== modul1'in fonksiyonlar�n� �a��rabilmek i�in
#include "module2.h" // <=== modul2'in fonksiyonlar�n� �a��rabilmek i�in

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

	a = 10;
	b = 20;

	module1_function1();

	module2_function2();

	return 0;
}

void function()
{
 
	static int fonk_statik_deg1 = 20; // lokal statik de�i�ken
	int fonk_deg2 = 0;// lokal otomatik de�i�ken

	printf("fonk_statik_deg1=%d\n", fonk_statik_deg1);
	printf("fonk_deg2=%d\n", fonk_deg2);
	fonk_statik_deg1++;
	fonk_deg2++;
	
	return;
}
