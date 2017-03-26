#include <stdio.h>
/*
İşaretçi aritmetiği ilgili örnek-2
*/
int main() {

	int  degisken_int = 10;
	char degisken_char = 11;
	float degisken_float = 2.3;
	double degisken_double = 10.10;
		

	int *pPointer_int;
	char *pPointer_char;
	float *pPointer_float;
	double *pPointer_double;

	pPointer_int = &degisken_int;
	pPointer_char = &degisken_char;
	pPointer_float = &degisken_float;
	pPointer_double = &degisken_double;


	printf("char degiskeninin adresi %x\n", pPointer_char);
	printf("int degiskeninin adresi %x\n", pPointer_int);
	printf("float degiskeninin adresi %x\n", pPointer_float);
	printf("double degiskeninin adresi %x\n", pPointer_double);
	
	printf("char degiskeninin boyutu %d\n", sizeof(degisken_char));
	printf("int degiskeninin boyutu %d\n", sizeof(degisken_int));
	printf("float degiskeninin boyutu %d\n", sizeof(degisken_float));
	printf("double degiskeninin boyutu %d\n", sizeof(degisken_double));

	pPointer_int++;
	pPointer_char++;
	pPointer_float++;
	pPointer_double++;

	printf("char degiskeninin adresi %x\n", pPointer_char);
	printf("int degiskeninin adresi %x\n", pPointer_int);
	printf("float degiskeninin adresi %x\n", pPointer_float);
	printf("double degiskeninin adresi %x\n", pPointer_double);


	return 0;
}


