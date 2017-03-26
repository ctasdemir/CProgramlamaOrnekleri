#include <stdio.h>
#include <stdint.h>

int a, b; // global deðiþkenler

int main()
{
	int sayi1 = 10;
	int sayi2 = 3;
	float ondalik = 1.34567;

	printf("sayi1=%d \n", sayi1);
	printf("sayi2=%d \n", sayi2);
	printf("ondalik=%f \n", ondalik);
	printf("a=%d \n", a);
	printf("b=%d \n", b);

	{
		char ch = 'A';
		printf("kar:%c\n", ch);
	}

	

	return 0;
}

