


//1'den girilen say�ya kadar olan say�lar�n toplam�n� veren program
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