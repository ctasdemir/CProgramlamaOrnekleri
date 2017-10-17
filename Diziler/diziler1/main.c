#include <stdio.h>
/*
Diziler ilgili örnek-1
*/
int main() {

	int dizi1[10];
	float dizi_float[5] = { 4.3,3.1,1.1,2.3 };
	int i = 0;
	
	for (i = 0; i < 10; i++) {
		printf("%d\n", dizi1[i]);
	}

	for (i = 0; i < 10; i++) {
		printf("%f\n", dizi_float[i]);
	}

	
	return 0;
}

