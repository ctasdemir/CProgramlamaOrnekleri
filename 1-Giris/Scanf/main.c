#include <stdio.h>
#include <stdint.h>


int main()
{
	int number1 = 10;
	int number2 = 3543;

	printf("2 sayi giriniz:\n");
	scanf("%d%d", &number1, &number2);

	printf("Sayi1=%d Sayi2=%d Toplamlari=%d\n", number1, number2, number1 + number2);
	
	return 0;
}


