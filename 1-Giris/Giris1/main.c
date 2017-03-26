#include <stdio.h>
#include <stdint.h>

int a, b;// global
#define PAKET_BOYUTU 10 

//int calisma_modu;



int mod; // 0,1,2,3,4 

enum modlar calisma_modu;


enum modlar {CALISMA_MODU_ILK_CALISMA,
		     CALISMA_MODU_ISINMA,
		     CALISMA_MODU_NORMAL,
		     CALISMA_MODU_ARIZA,
		     CALISMA_MODU_BAKIM};



/*
0 - ilk çalýþma modu
1 - ýsýnma modu
2 - normal çalýþma
3 - arýza modu 
4 - bakým
*/


void fonk1();
void fonk2();
void fonk3();
void mod_degistir(int mod);


int main()
{
	
	mod_degistir(1);

	mod_degistir(CALISMA_MODU_BAKIM);

	return 0;
}

void mod_degistir(int mod)
{
	calisma_modu = mod;
	printf("Calisma modu:%d\n", calisma_modu);
}


void fonk1()
{
	static int lokal1;
	printf("lokal1 %d\n", lokal1);
	lokal1++;
	a = 2;

}


void fonk2()
{
    int lokal2 = 0;
	printf("lokal2 %d\n", lokal2);
	lokal2++;
	b = 20;
	fonk3();
}



void fonk3()
{
	int lokal3 = 123;
	printf("lokal3 %d\n", lokal3);
}

