#include <stdio.h>
#include <stdint.h>

/*
  Matematik Ýþlemler
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

		// Ýki tam sayi bölünüp sonuc tam sayý deðiþkene atýlýyor
		tamSonuc = tamSayi1 / tamSayi2;
		printf("Tam sayi / tam sayi sonucu = %d\n",tamSonuc);

		// Ýki tam sayi bölünüp sonuc ondalik deðiþkene atýlýyor
		ondalikSonuc = tamSayi1 / tamSayi2;
		printf("Tam sayi / tam sayi sonucu (sonuc ondalik) = %f\n ",ondalikSonuc);
		

		// Tip dönüþümü ile tam sayýlar ondalýk sayýya çevriliyor
		ondalikSonuc = ondalikSayi1 / tamSayi2;
		printf("(Ondalik sayi / tam sayi sonucu = %f\n",ondalikSonuc);
		

		// Tip dönüþümü ile tam sayýlar ondalýk sayýya çevriliyor
		ondalikSonuc = (float)tamSayi1 / (float)tamSayi2;
		printf("(float) Tam sayi / (float) tam sayi sonucu =%f\n",ondalikSonuc);
		
		return 0;
	}


	


