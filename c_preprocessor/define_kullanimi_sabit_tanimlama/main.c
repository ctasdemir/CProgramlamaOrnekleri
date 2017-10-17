#include <stdio.h>
#include <stdint.h>

#define ARRAY_SIZE 20

int main()
{
	
	int array[ARRAY_SIZE];
	int i = 0;
	
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		array[i] = i;
	}

	for (i = 0; i < ARRAY_SIZE; i++)
	{
		printf("Array[%d] = %d\n", i, array[i]);
	}

	return 0;
}


