#include <stdio.h>
#include <stdint.h>

int main()
{
	uint32_t i = 0;

	i = 0;
	
	printf("do while dongusu\n");
	do
	{
		i++;
		if (i == 5)
		{
			continue;
		}
		printf("%d DO-WHILE DONGU\n", i);
	} while (i < 10);


	i = 0;
	
	printf("while dongusu\n");
	while (i < 10)
	{
		i++;
		if (i == 3)
		{
			continue;
		}
		printf("%d DONGU\n", i);
	}

	printf("for dongusu\n");
	for (i = 0; i < 20; i++)
	{
		if (i == 7)
		{
			printf("continue");
			continue;
			
		}
		printf("%d DONGU\n", i);
	}


	printf("i nin degeri=%d\n", i);
	return 0;
}

