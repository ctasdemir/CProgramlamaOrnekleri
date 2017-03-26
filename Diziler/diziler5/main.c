#include <stdio.h>
/*
2 boyutlu Diziler ve fonksiyonlar

*/
void matris_yazdir(const int sayi_dizisi[][4], int satir, int sutun);
int minimum(const int sayi_dizisi[][4], int satir, int sutun);
int main() {

	int matris[3][4] = { {112,4,6,7},{10,5,11,8},{40,21,3,100} };
	int minimum_eleman = 0;
	
	
	matris_yazdir(matris,3,4);
	minimum_eleman = minimum(matris,3,4);
	printf("\nMatrisin minimum elemani:%d\n", minimum_eleman);
	return 0;
}


void matris_yazdir(const int sayi_dizisi[][4], int satir, int sutun)
{
	int i, j;
	printf("Matris elemanlari:\n");

	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++)
		{
			printf("Satir %d sutun %d elemani:%d\n", i, j, sayi_dizisi[i][j]);
		}
	}
	
}

/* En k���k eleman� bul */
int minimum(const int sayi_dizisi[][4], int satir, int sutun)
{
	int i; /* satir indeksi */
	int j; /* sutun indeksi */
	int en_dusuk_deger = 10000; /* yuksek bir deger atayal�m */

								/* dizinin sat�rlar�n� tar�yoruz */
	for (i = 0; i < satir; i++) {

		/* dizinin s�tunlar�n� tar�yoruz */
		for (j = 0; j < sutun; j++) {

			if (sayi_dizisi[i][j] < en_dusuk_deger) {
				en_dusuk_deger = sayi_dizisi[i][j];
			} /* end if */
		} /* i�teki for�un kapan�s� */
	} /*d��taki for un kapan��� */
	return en_dusuk_deger; /* en k���k de�eri d�nd�r�yoruz */
} /* fonksiyon sonu */
