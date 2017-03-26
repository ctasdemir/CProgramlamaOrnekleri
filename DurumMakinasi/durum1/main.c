#include <stdio.h>
#include <windows.h>
/*
Ýþaretçiler ilgili örnek-1
*/
int main() {

	int durum = 1;
	int zaman = 0;
	while (1) {

		switch (durum)
		{
		case 1:
			if (zaman == 5)
			{
				durum = 2;
			}
			break;
		case 2:
			if (zaman == 10)
			{
				durum = 3;
			}
			break;
		case 3:
			if (zaman == 14)
			{
				zaman = 0;
				durum = 1;
			}
			break;
		}
		printf("Zaman:%d Durum %d\n", zaman,durum);
		
		zaman++;
		
		Sleep(1000);

	}


	return 0;
}

