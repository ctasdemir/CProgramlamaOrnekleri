#include <stdio.h>
#include <stdint.h>

int main()
{
	uint32_t yas = 0;

	printf("Yasinizi giriniz:\n");
	scanf("%d",&yas);

	if (yas < 18)
	{
		printf("Cocuk!\n");
	}
	else if (yas >= 18 && yas < 35)
	{
		printf("Genc!\n");
	}
	else if (yas >= 35 && yas < 60)
	{
		printf("Orta Yas!\n");
	}
	else if (yas >= 60)
	{
		printf("Yasli!\n");
	}
	return 0;
}

