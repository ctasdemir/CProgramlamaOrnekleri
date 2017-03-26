#include <stdio.h>
#include <stdint.h>


int main()
{
	int sayi1 = 10;
	int sayi2 = 3;
	int sonuc = 0;
	float ondalik = 1.34567;

	printf("toplama=%d \n", sayi1+sayi2);
	printf("cikarma=%d \n", sayi1-sayi2);
	printf("carpma=%d \n", sayi1*sayi2);
	printf("bolme=%d \n", sayi1 / sayi2);
	printf("mod=%d \n", sayi1 % 3);
	printf("artirma=%d \n", sayi1++);
	printf("azaltma=%d \n", sayi1--);

	return 0;
}


