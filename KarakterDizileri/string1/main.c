#include <stdio.h>
#include <string.h>

/*
	Karakter Dizileri - String'ler ile ilgili �rnek-1
*/
int main() {

	char string[] = "C KARAKTER DIZISI";

	printf("String: %s\n", string);
	printf("sizeof(string):%d", sizeof(string));
	printf("String boyutu:%d", strlen(string));

	return 0;
}

