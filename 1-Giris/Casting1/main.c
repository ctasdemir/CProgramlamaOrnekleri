#include <stdio.h>
#include <stdint.h>

/*
  Casting (Tip Değişimi)
  Büyük tipten küçük tipe aktarımda kayıp oluşur!

*/


	int integer1;
	int integer2;
	char byte;
	float floatNumber1;
	float floatNumber2;

int main(){

	integer1 = 1360;
	
	printf("Tam sayi = %d HEX=%04x\n", integer1,integer1);

	byte = integer1;

	printf("byte = %d HEX = %04x\n", byte,byte);

	integer2 = byte;

	printf("Tam sayi = %d HEX=%d\n", integer2, integer2);

	floatNumber1 = 123.332;

	printf("Ondalik sayi = %f\n", floatNumber1);

	integer1 = floatNumber1;

	printf("Tam sayi = %d\n", integer1);

	floatNumber2 = integer1;
	
	printf("Ondalik sayi = %f\n", floatNumber2);
	
		
		return 0;
	}


	


