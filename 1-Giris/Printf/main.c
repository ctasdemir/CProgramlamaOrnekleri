#include <stdio.h>

int main()
{
	int number1 = 10;
	int number2 = 3543;
	float fnumber = 1.34567;
	double dnumber = 1345.7654;
	char ch = 'X';

	printf("tam sayi=%d \n", number1);
	printf("ondalik sayi=%f \n", fnumber);
	printf("Sayi = %d \t Hexadesimal gosterim=%x \n", number2, number2);
	printf("ondalik sayi ustel gosterim=%e\n", dnumber);
	printf("Karaker=%c Sayi karsiligi=%d\n", ch, ch);
	return 0;
}


