#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi,sayi2=3;//tam sayi ifadeler.
	float sayi3=5.7;//ondal�kl� ifadeler
	double sayi4=2.5;//ondal�kl� ipfadeler
	char karakter='x';//karakterler 
	
	sayi=5;
	printf("%d %i %f %lf %c\n",sayi,sayi2, sayi3, sayi4, karakter);
	printf("%#X %#X %#X %#X %#X\n",&sayi,&sayi2,&sayi3,&sayi4,&karakter);//variable'lar�n adresslerini bulmak i�in bu i�aretleri kullan�yoruz.
	//%.1f,%.2lf *B�yle yaz�lmalar� durumunda say� yaz�l�rken ondal�k k�sm�nda noktadan sonra ne kadar ileri gidilecegini g�steriyor.
	
	//�S�MLEND�RME KURALLARI
	/*
	int sayi2;//tekrar tan�mlama yap�lamaz.
	int for;//keyword kullan�lamaz(for).
	int say�;//turkce karakter kullan�lamaz.
	int sayi 5;//bosluk karakteri kullanilamaz.
	int 2sayi;//isimlendirmeye sayiyla baslanilamaz.
	*/
	return 0;
}
