/* Bubble sort sýralama */

#include <stdio.h>

int main()
{
	int array[100], num, i, j, temp;

	printf("Eleman sayisini giriniz:\n");
	scanf("%d", &num);

	printf("%d adet tam sayi giriniz:\n", num);

	for (i = 0; i < num; i++)
		scanf("%d", &array[i]);

	for (i = 0; i < (num - 1); i++)
	{
		for (j = 0; j < num - i - 1; j++)
		{
			if (array[j] > array[j + 1]) 
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	printf("Siralanmis Dizi:\n");

	for (i = 0; i < num; i++)
		printf("%d\n", array[i]);

	return 0;
}