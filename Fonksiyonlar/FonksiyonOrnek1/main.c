/*******************************************************************************************
C PROGRAMLAMA EÐÝTÝMÝ - COÞKUN TAÞDEMÝR

Fonksiyonlar - 1
Fonksiyon Bildirimi (declaration)
Fonksiyon Tanýmlama (Definition)
Fonksiyon Çaðýrma (Call)

********************************************************************************************/
#include <stdio.h>
#include <stdint.h>

// Fonksiyon Prototipleri (Bildirimleri)
int find_max_number(int num1, int num2, int num3);
float calculate_average(int num1, int num2, int num3);
void print_to_screen(void);

int main()
{
	int a = 0;
	int b = 0;
	int c = 0; 
	int maks = 0;
	float ort = 0.0;

	printf("3 tam sayi giriniz:");
	scanf("%d%d%d", &a, &b, &c);

	/* maximum_sayi_dondur fonksiyonuna a,b,c deðerleri
	 parametre olarak geçiliyor. Fonksiyonun döndürdüðü deðer
	 maks deðiþkenine atanýyor
	*/
	maks = find_max_number(a, b, c);
	printf("Maksimum sayi:%d\n", maks);

	ort = calculate_average(a, b, c);
	printf("Ortalamalari:%f\n", ort);
	
	print_to_screen();

	return 0;
}

/* 
   Fonksiyon Tanýmlama

   Fonksiyonun Döndürdüðü deðer tipi : int
   Fonksiyonun ismi: find_max_number
   Fonksiyonun Parametreleri:
   1. Parametre : ismi num1 Tipi int
   2. Parametre : ismi num2 Tipi int
   3. Parametre : ismi num3 Tipi int

   Bu fonksiyon kendisine parametre olarak verilen 3 sayýnýn
   en büyüðünü döndürür
*/
int find_max_number(int num1, int num2, int num3)
{
	int maksimum = num1;

	if(num2 > maksimum)
	{
		maksimum = num2;
	}

	if( num3 > maksimum)
	{ 
		maksimum = num3;
	}

	return maksimum;
}


/*

Fonksiyonun ismi: calculate_average
Fonksiyonun Döndürdüðü deðer tipi : float
Fonksiyonun Parametreleri:
1. Parametre : ismi num1 Tipi int
2. Parametre : ismi num2 Tipi int
3. Parametre : ismi num3 Tipi int

Bu fonksiyon kendisine parametre olarak verilen 3 sayýnýn
ortalamasýný döndürür
*/
float calculate_average(int num1, int num2, int num3)
{
	float average = 0.0; // lokal deðiþken

	average = (num1 + num2 + num3) / 3.0;

	return average;

}

/*

Fonksiyonun ismi: ekrana_yazdir
Fonksiyon Deðer döndürmüyor : void 
Fonksiyonun Parametre almýyor

Bu fonksiyon ekrana "fonksiyon ornegi" yazdirir.
*/
void print_to_screen(void)
{
	printf("fonksiyon ornegi\n");
	return;
}