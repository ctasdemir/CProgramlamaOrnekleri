/*******************************************************************************************
C PROGRAMLAMA EÐÝTÝMÝ - COÞKUN TAÞDEMÝR

Fonksiyonlar - 1
Fonksiyon Bildirimi (declaration)
Fonksiyon Tanýmlama (Definition)
Fonksiyon Çaðýrma (Call)

********************************************************************************************/
#include <stdio.h>
#include <stdint.h>

int maximum_sayi_dondur(int sayi1, int sayi2, int sayi3);
float ortalamaHesapla(int sayi1, int sayi2, int sayi3);
void ekranaYazdir(void);

int main()
{
	int a = 0;
	int b = 0;
	int c = 0; 
	int maks = 0;
	float ort = 0.0;

	printf("3 tam sayi giriniz:");
	scanf("%d%d%d", &a, &b, &c);

	maks = maximum_sayi_dondur(a, b, c);
	printf("Maksimum sayi:%d\n", maks);

	ort = ortalamaHesapla(a, b, c);
	printf("Ortalamalari:%f\n", ort);
	
	ekranaYazdir();

	return 0;
}


int maximum_sayi_dondur(int sayi1, int sayi2, int sayi3)
{
	int maksimum = sayi1;

	if(sayi2 > maksimum)
	{
		maksimum = sayi2;
	}

	if( sayi3 > maksimum)
	{ 
		maksimum = sayi3;
	}

	return maksimum;
}

float ortalamaHesapla(int sayi1, int sayi2, int sayi3)
{
	float ortalama = 0.0;
	ortalama = (sayi1 + sayi2 + sayi3) / 3.0;
	return ortalama;

}


void ekranaYazdir(void)
{
	printf("fonksiyon ornegi\n");
	return;

	printf("return sonrasi\n");
	return;

}