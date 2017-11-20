#include <stdio.h>
#include <string.h>

/*
	Karakter Dizileri - String'ler ile ilgili örnek - 5
	strcmp fonksiyonu ile iki stringi karþýlaþtýrma

*/
int main() {

	char string1[31];
	char string2[31];
	int result = 0;
	printf("1. kelimeyi giriniz:");
	scanf("%s",string1);

	printf("2. kelimeyi giriniz:");
	scanf("%s", string2);

	
	result = strcmp(string1, string2);

	if (result == 0)
	{
		printf("girilen kelimeler ayni!\n");
	}
	else
	{
		printf("girilen kelimeler farkli!\n");
	}
	
	
	return 0;
}



