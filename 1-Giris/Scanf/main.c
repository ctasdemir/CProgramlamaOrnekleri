#include <stdio.h>
#include <stdint.h>


int main()
{
	int sayi1 = 10;
	int sayi2 = 3543;

	printf("2 sayi giriniz:\n");
	scanf("%d%d", &sayi1, &sayi2);

	printf("Sayi1=%d Sayi2=%d Toplamlari=%d\n", sayi1,sayi2,sayi1+sayi2);
	
	return 0;
}


