#include <stdio.h>
/*
Fonksiyonlar ve Ýþaretçiler
Referans ile çaðýrma örneði
*/

void topla_referans(int *pToplaSonuc, int sayi1, int sayi2);

int main() {

	int a = 10;
	int b = 23;
	int sonuc = 0;
	const int d = 10;

	printf("a sayisi= %d b sayisi = %d sonuc degeri =%d\n", a, b, sonuc);

	topla_referans(&sonuc, a, b);

	printf("a sayisi= %d b sayisi = %d sonuc degeri =%d\n", a, b, sonuc);



	return 0;
}


void topla_referans(int *pToplaSonuc, int sayi1, int sayi2)
{
	int sonuc = 0;

	sonuc = sayi1 + sayi2;
	sayi1++;
	sayi2++;
	
	*pToplaSonuc = sonuc;
}

int topla(int sayi1, int sayi2)
{
	int sonuc = 0;

	sonuc = sayi1 + sayi2;
	sayi1++;
	sayi2++;

	return sonuc;
}

