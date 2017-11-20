#include <stdio.h>
int main()
{
	int i, j, k;
	int sayac = 0;
	for (i = 20; i>10; i--)
	{
		printf("1. dongu=%d\n", i);
		for (j = 0; j<10; j++)
		{
			printf("2. dongu=%d\n", j);
			for (k = 5; k<30; k+=5)
			{
				printf("3. dongu=%d ", k);
				printf("Sayac=%d\n", sayac++);
			}
			printf("\n");
		}
	}



	return 0;
}