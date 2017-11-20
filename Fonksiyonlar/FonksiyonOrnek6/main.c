/*******************************************************************************************
C PROGRAMLAMA EÐÝTÝMÝ - COÞKUN TAÞDEMÝR

Fonksiyonlar - 6
Modüller oluþturma

Modül-1 : modul1.h modul1.c
Modül-2 : modul2.h modul2.c

********************************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include "module1.h" // <=== modul1'in fonksiyonlarýný çaðýrabilmek için
#include "module2.h" // <=== modul2'in fonksiyonlarýný çaðýrabilmek için

int a, b; // global deðiþkenler


void function();


int main()
{
	/*
	   sayi1, sayi2, ondalik deðiþkenleri lokal deðiþkenlerdir. Sadece
	   main() fonksiyonu içerisinde tanýmlýdýrlar. Baþka bir fonksiyondan bu deðiþkenlere
	   eriþilemez.
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
 
	static int fonk_statik_deg1 = 20; // lokal statik deðiþken
	int fonk_deg2 = 0;// lokal otomatik deðiþken

	printf("fonk_statik_deg1=%d\n", fonk_statik_deg1);
	printf("fonk_deg2=%d\n", fonk_deg2);
	fonk_statik_deg1++;
	fonk_deg2++;
	
	return;
}
