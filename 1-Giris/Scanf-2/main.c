#include <stdio.h>
#include <stdint.h>


int main()
{
	char kar1;
	char kar2;

	printf("2 karakter giriniz:\n");
	scanf("%c %c", &kar1, &kar2);

	printf("Karakter 1=%c ASCII Degeri %d, Karakter 2=%c ASCII Degeri %d \n", kar1, kar1, kar2,kar2);
	
	return 0;
}


