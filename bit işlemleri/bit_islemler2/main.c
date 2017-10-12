#include <stdio.h>
#include <string.h>
#include <stdint.h>
/*
Bit iþlemleri-2
Bit SET ve RESET iþlemleri

Sayýyý binary olarak yazdýrma fonksiyonlarý:
http://www.phanderson.com/printer/bin_disp.html

*/

	void bin_prnt_byte(int x);
	void bin_prnt_int16(int x);

	int main(void)
	{
		int8_t sekizlik = 10;
		
		
		sekizlik = 0;
		bin_prnt_byte(sekizlik);
		//4. biti SET etmek (2^4);
		
		sekizlik |= 16;
		bin_prnt_byte(sekizlik);
		
		sekizlik = 0;
		//4. biti SET etmek (1<<4 ==> 10000);
		sekizlik |= (1 << 4);
		bin_prnt_byte(sekizlik);

		sekizlik = 255;
		bin_prnt_byte(sekizlik);
		//4. biti SIFIRLAMAK / RESET etmek 
		sekizlik &= ~(1 << 4);
		bin_prnt_byte(sekizlik);


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
	



