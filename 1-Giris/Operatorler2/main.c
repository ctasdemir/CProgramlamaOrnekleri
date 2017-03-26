#include <stdio.h>
#include <stdint.h>

/*
  sizeof operatörü
*/

int main()
{
	int tamsayi_int = 10;
	short tamsayi_short = 10;
	float ondalik_float = 123.445;
	double ondalik_double = 3323.45657;

	printf("int boyutu:%d\n", sizeof(tamsayi_int));
	printf("int boyutu:%d\n", sizeof(tamsayi_short));
	printf("float boyutu:%d\n", sizeof(ondalik_float));
	printf("double boyutu:%d\n", sizeof(ondalik_double));
	

	
	
	return 0;
}


void fonksiyon()
{
	static int fonk_statik_deg1 = 20; // lokal statik deðiþken
	int fonk_deg2 = 12;// lokal otomatik deðiþken

	printf("fonk_statik_deg1=%d\n", fonk_statik_deg1);
	printf("fonk_deg2=%d\n", fonk_deg2);
	fonk_statik_deg1++;
	fonk_deg2++;

}
