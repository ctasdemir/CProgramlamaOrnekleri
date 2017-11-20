#include <stdio.h>
#include <string.h>

/*
	Karakter Dizileri - String'ler ile ilgili örnek - 3
	strcat fonksiyonu ile iki stringi birleþtirme

*/
int main() {

	char name[20];
	char surname[20];
	char name_surname[42]="";

	printf("isminizi giriniz:");
	scanf("%s",name);
	printf("Soyisminizi giriniz:");
	scanf("%s",surname);
	
	strcat(name_surname, name);
	strcat(name_surname, surname);

	printf("isim soyisim: %s\n", name_surname);

	
	return 0;
}



