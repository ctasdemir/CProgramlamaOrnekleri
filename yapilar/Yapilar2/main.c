/*******************************************************************************************
C PROGRAMLAMA EÐÝTÝMÝ - COÞKUN TAÞDEMÝR

YAPILAR (STRUCT) - 2
struct tipini ve deðiþkeni ayný anda tanýmlama

********************************************************************************************/
#include <stdio.h>
#include <string.h>


struct otomobil_s {
	int model;
	int kapi_sayisi;
	float motor_hacmi;
}oto1;


int main() {

	oto1.kapi_sayisi = 4;
	oto1.model = 12;
	oto1.motor_hacmi = 1.6;
	
	printf("Kapý Sayisi:%d\n", oto1.kapi_sayisi);
	printf("Model No:%d\n", oto1.model);
	printf("Motor Hacmi:%f\n", oto1.motor_hacmi);


	
	return 0;
}


