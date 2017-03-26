#include <stdio.h>

void call_by_value(int x) {
	printf("Fonksiyon cagrisi icinde x = %d \n", x);
	x += 10;
	printf("Fonksiyon cagrisi icinde 10 eklendikten sonra x = %d \n", x);
}

int main() {
	int a = 10;

	printf("call-by-value cagrisi oncesi a = %d .\n", a);
	call_by_value(a);
	printf("call-by-value cagrisi sonrasi a = %d \n", a);
	return 0;
}