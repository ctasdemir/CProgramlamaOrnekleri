#include <stdio.h>
#include <stdint.h>

int main()
{
	uint32_t i = 0;

	i = 10;


	do
	{
		printf("%d DO-WHILE DONGU\n", i);
		i++;
	} while (i < 10);



	while (i < 10)
	{
		printf("%d DONGU\n", i);
		i++;
	}

	printf("i nin degeri=%d\n", i);
	return 0;
}

