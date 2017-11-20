#include <stdio.h>
#include <string.h>

/*
	Karakter Dizileri - String'ler ile ilgili örnek - 4
	strcat fonksiyonu ile iki stringi birleþtirme

*/
int main() {

	char sentence[31] = "cumle icerisinde harf arama";
	char ch = 'h';
	char *position;
	
	
	position = strchr(sentence, ch);
	
	printf("Cumle icinde aranilan harf sonrasi: %s\n", position);
	printf("Cumle icinde aranilan harfin adresi %d\n", position - sentence);

	
	return 0;
}



