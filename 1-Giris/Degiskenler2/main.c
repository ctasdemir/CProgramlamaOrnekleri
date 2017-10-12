#include <stdio.h>
#include <stdint.h>

int a, b; // global deðiþkenler
void fonksiyon();

int main()
{
	int sayi1 = 10;
	int sayi2 = 3;
	float ondalik = 1.34567;
		
	printf("sayi1=%d \n", sayi1);
	printf("sayi2=%d \n", sayi2);
	fonksiyon();
	fonksiyon();
	fonksiyon();
	
	return 0;
}

void fonksiyon()
{
	static int fonk_statik_deg1 = 20; // lokal statik deðiþken
	int fonk_deg2;// lokal otomatik deðiþken

	printf("fonk_statik_deg1=%d\n", fonk_statik_deg1);
	printf("fonk_deg2=%d\n", fonk_deg2);
	fonk_statik_deg1++;
	fonk_deg2++;

	return;
}
