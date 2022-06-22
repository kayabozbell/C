#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi,sayi2=3;//tam sayi ifadeler.
	float sayi3=5.7;//ondalýklý ifadeler
	double sayi4=2.5;//ondalýklý ipfadeler
	char karakter='x';//karakterler 
	
	sayi=5;
	printf("%d %i %f %lf %c\n",sayi,sayi2, sayi3, sayi4, karakter);
	printf("%#X %#X %#X %#X %#X\n",&sayi,&sayi2,&sayi3,&sayi4,&karakter);//variable'larýn adresslerini bulmak için bu iþaretleri kullanýyoruz.
	//%.1f,%.2lf *Böyle yazýlmalarý durumunda sayý yazýlýrken ondalýk kýsmýnda noktadan sonra ne kadar ileri gidilecegini gösteriyor.
	
	//ÝSÝMLENDÝRME KURALLARI
	/*
	int sayi2;//tekrar tanýmlama yapýlamaz.
	int for;//keyword kullanýlamaz(for).
	int sayý;//turkce karakter kullanýlamaz.
	int sayi 5;//bosluk karakteri kullanilamaz.
	int 2sayi;//isimlendirmeye sayiyla baslanilamaz.
	*/
	return 0;
}
