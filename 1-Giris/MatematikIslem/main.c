#include <stdio.h>
#include <stdint.h>

/*
  Matematik ��lemler
*/


	int tamSayi1;
	int tamSayi2;
	int tamSonuc;
	float ondalikSayi1;
	float ondalikSonuc;

int main(){

		tamSayi1 = 136;
		tamSayi2 = 11;
		ondalikSayi1 = 136.0;

		// �ki tam sayi b�l�n�p sonuc tam say� de�i�kene at�l�yor
		tamSonuc = tamSayi1 / tamSayi2;
		printf("Tam sayi / tam sayi sonucu = %d\n",tamSonuc);

		// �ki tam sayi b�l�n�p sonuc ondalik de�i�kene at�l�yor
		ondalikSonuc = tamSayi1 / tamSayi2;
		printf("Tam sayi / tam sayi sonucu (sonuc ondalik) = %f\n ",ondalikSonuc);
		

		// Tip d�n���m� ile tam say�lar ondal�k say�ya �evriliyor
		ondalikSonuc = ondalikSayi1 / tamSayi2;
		printf("(Ondalik sayi / tam sayi sonucu = %f\n",ondalikSonuc);
		

		// Tip d�n���m� ile tam say�lar ondal�k say�ya �evriliyor
		ondalikSonuc = (float)tamSayi1 / (float)tamSayi2;
		printf("(float) Tam sayi / (float) tam sayi sonucu =%f\n",ondalikSonuc);
		
		return 0;
	}


	


