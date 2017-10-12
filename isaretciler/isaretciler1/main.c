#include <stdio.h>
/*
İşaretçiler ilgili örnek-1
*/
int main() {

	int degisken1 = 0;
	int degisken2 = 0;

	int *pPointer1 = NULL;
	int *pPointer2 = NULL;
	

	printf("degisken1 degiskeninin adresi %x\n", &degisken1);
	printf("degisken2 degiskeninin adresi %x\n", &degisken2);

	pPointer1 = &degisken1;
	pPointer2 = &degisken2;


	printf("pPointer1 degiskeninin degeri %x\n", pPointer1);
	printf("pPointer2 degiskeninin degeri %x\n", pPointer2);

	printf("degisken1 degiskeninin degeri %d\n", degisken1);
	printf("degisken2 degiskeninin degeri %d\n", degisken2);

	*pPointer1 = 12;
	*pPointer2 = 15;
	

	printf("degisken1 degiskeninin degeri %d\n", degisken1);
	printf("degisken2 degiskeninin degeri %d\n", degisken2);


	return 0;
}

