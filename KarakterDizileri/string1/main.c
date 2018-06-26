#include <stdio.h>
#include <string.h>

/*
	Karakter Dizileri - String'ler ile ilgili örnek-1
*/
int main() {

	char string[] = "C KARAKTER DIZISI";

	printf("String: %s\n", string);
	printf("sizeof(string):%d\n", sizeof(string));
	printf("String boyutu:%d\n", strlen(string));

	return 0;
}

