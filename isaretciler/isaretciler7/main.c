#include <stdio.h>
/*
Ýþaretçiler ve fonksiyonlar
Bubble sort sýralama örneði
*/


void bubbleSort(int * dizi, int boyut);
void swap(int *birinciEleman, int *ikinciEleman);
int main() {

	int  dizi[10] = { 10, 23, 1, 4, 3, 26, 112, 56, 77,100 };
	int i = 0;
	
	
	printf("Dizi elemanlari:\n");
	for (i = 0; i < 10; i++) {
		printf("%d\t", dizi[i]);
	}


	bubbleSort(dizi, 10);

	printf("\nDizi elemanlari:\n");
	for (i = 0; i < 10; i++) {
		printf("%d\t", dizi[i]);
	}


	return 0;
}


void bubbleSort(int * dizi, int boyut)
{
	int sira, j;

	for (sira = 0; sira < boyut - 1; sira++)
	{
		for (j = 0; j < boyut - 1; j++)
		{
			if (dizi[j] > dizi[j + 1])
			{
				swap(&dizi[j], &dizi[j + 1]);
			}
		}
	}
}

void swap(int *birinciEleman, int *ikinciEleman)
{
	int gecici_deger = *birinciEleman;

	*birinciEleman = *ikinciEleman;
	*ikinciEleman = gecici_deger;
}