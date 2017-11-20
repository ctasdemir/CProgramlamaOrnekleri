#include <stdio.h>
#include <string.h>
#include <stdint.h>
/*
Bit iþlemleri-1
Kaydýrma iþlemleri
*/

	void print_binary_int16(int x);
	void print_binary_byte(int x);

	int main(void)
	{
		int8_t sekizlik = 10;
		print_binary_byte(sekizlik);
		
		sekizlik >>= 1;
		print_binary_byte(sekizlik);
		sekizlik >>= 1;
		print_binary_byte(sekizlik);
		sekizlik >>= 1;
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
	



