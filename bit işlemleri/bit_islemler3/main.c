#include <stdio.h>
#include <string.h>
#include <stdint.h>
/*
Bit iþlemleri-3
Mantýk iþlemleri

Sayýyý binary olarak yazdýrma fonksiyonlarý:
http://www.phanderson.com/printer/bin_disp.html

*/

	void bin_prnt_byte(int x);
	void bin_prnt_int16(int x);

	int main(void)
	{
		int8_t sekizlik1 = 10;
		int8_t sekizlik2 = 12;
		printf("sayi1:");
		bin_prnt_byte(sekizlik1);
		printf("sayi2:");
		bin_prnt_byte(sekizlik2);
		printf("sayi1 | sayi2:");
		bin_prnt_byte(sekizlik1 | sekizlik2);
		printf("sayi1 & sayi2:");
		bin_prnt_byte(sekizlik1 & sekizlik2);
		printf("sayi1 ^ sayi2:");
		bin_prnt_byte(sekizlik1 ^ sekizlik2);

		
		

	}


	void bin_prnt_byte(int x)
	{
		int n;
		for (n = 0; n<8; n++)
		{
			if ((x & 0x80) != 0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
			if (n == 3)
			{
				printf(" "); 
			}
			x = x << 1;
		}
		printf("\n");
	}

	void bin_prnt_int16(int x)
	{
		int hi, lo;
		hi = (x >> 8) & 0xff;
		lo = x & 0xff;
		bin_prnt_byte(hi);
		printf(" ");
		bin_prnt_byte(lo);
	}
	



