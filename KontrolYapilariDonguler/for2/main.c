


//1'den girilen sayýya kadar olan sayýlarýn toplamýný veren program
#include <stdio.h>
int main()
{
	int sinir = 0, sayac = 0, toplam = 0;

	
	printf("Pozitif bir tam sayi girin: ");
	scanf("%d", &sinir);

	

	for (sayac = 1; sayac <= sinir; sayac++)
	{
		toplam += sayac;
	}

	printf("Toplam = %d\n", toplam);

	return 0;
}