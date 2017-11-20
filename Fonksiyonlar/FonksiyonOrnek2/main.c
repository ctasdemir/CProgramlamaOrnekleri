/*******************************************************************************************
C PROGRAMLAMA EÐÝTÝMÝ - COÞKUN TAÞDEMÝR

Fonksiyonlar - 2
Fonksiyon içerisinden fonksiyon çaðýrma

********************************************************************************************/
#include <stdio.h>
#include <stdint.h>

// Fonksiyon Prototipleri (Bildirimleri)
int function_1(int par1);
int function_2(int par1);
int function_3(int par1);

int main()
{
	
	function_1(1);

	return 0;
}

/* 
   Fonksiyon Tanýmlama

   Fonksiyonun Döndürdüðü deðer tipi : int
   Fonksiyonun ismi: function_1
   Fonksiyonun Parametreleri:
   1. Parametre : ismi par1 Tipi int
*/
int function_1(int par1)
{
	printf("fonksiyon 1, %d argumani ile cagrýldý\n", par1);
	
	function_2(par1 + 1);
	return 0;
}
/*

Fonksiyonun Döndürdüðü deðer tipi : int
Fonksiyonun ismi: function_2
Fonksiyonun Parametreleri:
1. Parametre : ismi par1 Tipi int
*/
int function_2(int par1)
{
	printf("fonksiyon 2, %d argumani ile cagrýldý\n", par1);

	function_3(par1 + 1);
	return 0;
}

/*
Fonksiyonun Döndürdüðü deðer tipi : int
Fonksiyonun ismi: function_3
Fonksiyonun Parametreleri:
1. Parametre : ismi par1 Tipi int
*/
int function_3(int par1)
{
	printf("fonksiyon 3, %d argumani ile cagrýldý\n", par1);

	return 0;
}

