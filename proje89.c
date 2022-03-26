#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("***************\n\n");
	printf("\n");
	printf("   HOSGELDINIZ\n\n");
	printf("***   MENU   ***");
	printf("\n");
	printf("***************");
	printf("\n\n");
	printf("1-Toplama Islemi\n");
	printf("2-Cikarma Islemi\n");
	printf("3-Carpma Islemi\n");
	printf("4-Bolme Islemi\n");
	printf("5-Kare Alma\n");
	printf("6-Kup Alma\n");
	printf("7-Karekok Alma\n");
	printf("8-Taban ve Us Hesaplama\n");
	printf("9-Denklem Hesaplama (3x^2+4x-5)\n");
	printf("10-Logaritma Hesaplama\n");
	printf("11-Mutlak Deger Hesaplama\n");
	
	int s1,s2,secim,sonuc;
	
	printf("Seciminizi Giriniz: ");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
			printf("Birinci Sayiyi Giriniz: ");
			scanf("%d",&s1);
			printf("Ikinci Sayiyi Giriniz: ");
			scanf("%d",&s2);
			sonuc=s1+s2;
			printf("Toplam Sonuc: %d",sonuc);
		break;
		
		case 2:
		    printf("Birinci Sayiyi Giriniz: ");
			scanf("%d",&s1);
			printf("Ikinci Sayiyi Giriniz: ");
			scanf("%d",&s2);
			sonuc=s1-s2;
			printf("Fark Sonuc: %d",sonuc);
		break;
		
		case 3:
		    printf("Birinci Sayiyi Giriniz: ");
			scanf("%d",&s1);
			printf("Ikinci Sayiyi Giriniz: ");
			scanf("%d",&s2);
			sonuc=s1*s2;
			printf("Carpim Sonuc: %d",sonuc);
		break;
		
		case 4:
		    printf("Birinci Sayiyi Giriniz: ");
			scanf("%d",&s1);
			printf("Ikinci Sayiyi Giriniz: ");
			scanf("%d",&s2);
			sonuc=s1/s2;
			printf("Bolum Sonuc: %d",sonuc);
		break;
		
		case 5: 
			printf("Sayiyi Giriniz: ");
			scanf("%d",&s1);
			sonuc=s1*s1;
			printf("Kare Sonuc: %d",sonuc);
		break;
		
		case 6:
		    printf("Birinci Sayiyi Giriniz: ");
		    scanf("%d",&s1);
			sonuc=s1*s1*s1;
			printf("Kup Sonuc: %d",sonuc);
		break;
		
		case 7:
		    printf("Sayi Giriniz: ");
			scanf("%d",&s1);
			sonuc=sqrt(s1);
			printf("Karekok Sonuc: %d",sonuc);
		break;	
		
		case 8:
			printf("Taban Girin: ");
			scanf("%d",&s1);
			printf("Us Girin: ");
			scanf("%d",&s2);
			sonuc=pow(s1,s2);
			printf("Taban ve Us Sonuc: %d",sonuc);
		break;
		
		case 9:
			printf("X Degerini Girin: ");
			scanf("%d",&s1);
			sonuc=3*s1^2+4*s1-5;
			printf("Denklem Sonuc: %d",sonuc);
		break;
		
		case 10:
			printf("Sayiyi Giriniz: ");
			scanf("%lf",&s1);
			sonuc=log(s1);
			printf("Logaritma Sonuc: %.2lf",sonuc);
		break;
		
		case 11:
		    printf("Sayiyi Giriniz: ");
			scanf("%lf",&s1);
			sonuc=fabs(s1);
			printf("Logaritma Sonuc: %lf",s1);
		break;	
	}
	
	return 0;
}
