#include <stdio.h>
#include <string.h>

/*
	Karakter Dizileri - String'ler ile ilgili örnek - 2
*/
int main() {

	char name[50];
	char surname[50];

	printf("isminizi giriniz:");
	scanf("%s",name);
	printf("Soyisminizi giriniz:");
	scanf("%s",surname);
	
	printf("isminiz: %s, %d adet harften olusuyor\n",name,strlen(name));
	printf("Soyisminiz: %s, %d adet harften olusuyor\n", surname, strlen(surname));
	
	return 0;
}



