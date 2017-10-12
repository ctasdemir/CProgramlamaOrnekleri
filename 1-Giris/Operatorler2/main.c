#include <stdio.h>
#include <stdint.h>


int main()
{
	int sayi1 = 10;
	int sayi2 = 3;
	
	
	printf("sayi1 = %d sayi2 = %d\n", sayi1++, sayi2++);
	printf("sayi1 = %d sayi2 = %d\n", sayi1, sayi2);

	printf("sayi1 = %d sayi2 = %d\n", ++sayi1, ++sayi2);
	printf("sayi1 = %d sayi2 = %d\n", sayi1, sayi2);	

	return 0;
}

