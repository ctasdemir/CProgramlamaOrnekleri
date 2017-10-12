#include <stdio.h>
#include <stdint.h>

int main()
{
	uint32_t i = 0;

	i = 0;

	while (i < 10)
	{
		printf("%d DONGU\n", i);
		i++;
	}

	printf("i nin degeri=%d", i);
	return 0;
}

