#include <stdio.h>
#include <stdint.h>

int main()
{
	uint32_t secim = 0;

	printf("1: MENU1\n");
	printf("2: MENU2\n");
	printf("3: MENU3\n");
	printf("4: MENU4\n");
	printf("5: CIKIS\n");
	


	while (1) {
		printf("Seciminizi giriniz:\n");
		scanf("%d", &secim);
		switch (secim)
		{
		case 1:
			printf("MENU1!\n");
			return 0;
			break;
		case 2:
			printf("MENU2!\n");
			return 0;
			break;
		case 3:
			printf("MENU3!\n");
			return 0;
			break;
		case 4:
			printf("MENU4!\n");
			return 0;
			break;
		case 5:
			// CIKIS
			return 0;
			break;
		default:
			printf("yanlis secim!\n");
			break;
		}
	
	}

	return 0;
}

