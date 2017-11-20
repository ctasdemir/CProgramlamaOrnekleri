/*******************************************************************************************
C PROGRAMLAMA E��T�M� - CO�KUN TA�DEM�R

Fonksiyonlar - 2
Adres ge�erek �a��rma (Call-by-reference)

Fonksiyonlara parametreler adres �a��rma ile  ge�ildi�inde
de�i�kenlerin adresleri fonksiyona iletilir.  Fonksiyon
i�erisinde bu de�i�kenlerle i�lem yap�ld���nda de�i�kenleri de�erleri de�i�ir.

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