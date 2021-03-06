#include <stdio.h>
#include <stdlib.h>

#define KIRMIZI 1
#define S�YAH 2
#define MAVI 3

#define OTOMATIK_VITES 1
#define MANUEL_VITES 0

struct MOTOR
{
  float silindir_hacmi;
  int silindir_sayisi;
  int Beygir_Gucu;	
};

struct VITES
{
   int vites_sayisi;
   int oto_mu_manuel_mi;	
};

struct ARABA
{
   struct MOTOR motoru;
   struct VITES vitesi;
   int renk;
   int kapi_sayisi;
};

void araba_renk_yazdir(struct ARABA araba);
void araba_vites_yazdir(struct ARABA *pAraba);

int main()
{
  struct ARABA araba1 = {{1.6,8,300},{5,OTOMATIK_VITES},KIRMIZI,5};
  struct ARABA galeri[50];
  printf("Arabanin Silindir Sayisi :%d\n",araba1.motoru.silindir_sayisi);
  
  
  galeri[19].renk = MAVI;
  galeri[0].motoru.silindir_hacmi = 2.0;
  
  
  araba_renk_yazdir(araba1);
  araba_renk_yazdir(galeri[19]);
  araba_vites_yazdir(&araba1);  
  
  	return 0;
}

void araba_renk_yazdir(struct ARABA araba)
{
	switch(araba.renk)
	{
		case 1:
			printf("ARABA KIRMIZI!\n");
			break;
		case 2:
			printf("ARABA SIYAH!\n");
			break;
		case 3:
			printf("ARABA MAVI!\n");
			break;
		default:
			printf("RENK KODU GECERSIZ!\n");
			break;
	}
}

void araba_vites_yazdir(struct ARABA *pAraba)
{
	if(pAraba->vitesi.oto_mu_manuel_mi == 1 )
	{
		printf("VITES OTOMATIK!\n");
	}
	else
	{
		printf("VITES MANUEL \n");
	}
}
