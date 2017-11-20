/*******************************************************************************************
C PROGRAMLAMA EÐÝTÝMÝ - COÞKUN TAÞDEMÝR

Fonksiyonlar - 2
Adres geçerek çaðýrma (Call-by-reference)

Fonksiyonlara parametreler adres çaðýrma ile  geçildiðinde
deðiþkenlerin adresleri fonksiyona iletilir.  Fonksiyon
içerisinde bu deðiþkenlerle iþlem yapýldýðýnda deðiþkenleri deðerleri deðiþir.

********************************************************************************************/

#include <stdio.h>


void call_by_reference(int *y);

int main() {
	int b = 10;

	printf("fonksiyon cagrisindan once b = %d .\n", b);
		call_by_reference(&b);
	printf(" fonksiyon cagrisindan sonra b = %d \n", b);

	return 0;
}


void call_by_reference(int *y)
{
	printf("10 eklemeden once y = %d.\n", *y);
	(*y) += 10;
	printf("10 ekledikten sonra y = %d \n", *y);
}