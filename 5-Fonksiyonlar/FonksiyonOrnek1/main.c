#include <stdio.h>
#include <stdint.h>

int maximum_sayi_dondur(int sayi1, int sayi2, int sayi3);

int main()
{
	int a, b, c;

	printf("3 tam sayi giriniz:");
	scanf("%d%d%d", &a, &b, &c);
	printf("Maksimum sayi:%d\n", maximum_sayi_dondur(a, b, c));
	
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