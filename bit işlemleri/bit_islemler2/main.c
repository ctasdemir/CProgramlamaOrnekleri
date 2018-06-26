#include <stdio.h>
#include <string.h>
#include <stdint.h>
/*
Bit iþlemleri-2
Bit SET ve RESET iþlemleri

*/

	void print_binary_int16(int x);
	void print_binary_byte(int x);

	int main(void)
	{
		int8_t sekizlik = 10;
		
		
		sekizlik = 0;
		print_binary_byte(sekizlik);

		//4. biti SET etmek (2^4);
		
		sekizlik |= 16;
		print_binary_byte(sekizlik);
		
		sekizlik = 0;
		//4. biti SET etmek (1<<4 ==> 10000);
		sekizlik |= (1 << 4);
		print_binary_byte(sekizlik);

		sekizlik = 255;
		print_binary_byte(sekizlik);
		//4. biti SIFIRLAMAK / RESET etmek 
		sekizlik &= ~(1 << 4);
		print_binary_byte(sekizlik);


	}


	void print_binary_byte(int x)
	{
		int n;
		for (n = 0; n<8; n++)
		{
			if ((x & 128) != 0)
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

	void print_binary_int16(int x)
	{
		int hi, lo;
		hi = (x >> 8) & 0xff;
		lo = x & 0xff;
		print_binary_byte(hi);
		printf(" ");
		print_binary_byte(lo);
	}
	



