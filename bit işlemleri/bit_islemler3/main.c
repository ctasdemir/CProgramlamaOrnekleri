#include <stdio.h>
#include <string.h>
#include <stdint.h>
/*
Bit iþlemleri-3
Bit bazlý mantýk operatörleri
*/

	void print_binary_int16(int x);
	void print_binary_byte(int x);

	int main(void)
	{
		int8_t sekizlik1 = 10;
		int8_t sekizlik2 = 12;
		
		printf("sayi1:\t");
		print_binary_byte(sekizlik1);

		printf("sayi2:\t");
		print_binary_byte(sekizlik2);

		
		printf("sayi1 | sayi2:\t");
		print_binary_byte(sekizlik1 | sekizlik2);
		printf("sayi1 & sayi2:\t");
		print_binary_byte(sekizlik1 & sekizlik2);
		printf("sayi1 ^ sayi2:\t");
		print_binary_byte(sekizlik1 ^ sekizlik2);

		
		

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
	



