#include <stdio.h>
/*
Diziler ilgili örnek-4

Diziler ve fonksiyonlar

*/

void dizi_yazdir( int yazdirilacakDizi[], int diziBoyutu);
int main() {
	int dizi[10] = { 10,22,3,4,6,83,1,2,44,12 };
	
	dizi_yazdir(dizi, 10);
	return 0;
}

void dizi_yazdir( int yazdirilacakDizi[], int diziBoyutu)
{
	int i = 0;
	printf("Dizi elemanlari:\n");
	
		for(i = 0; i < diziBoyutu; i++)
		{
			printf("Dizinin %d. elamani:%d\n",i, yazdirilacakDizi[i]);
		}
}