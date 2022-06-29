#include <stdio.h>
#include <stdlib.h>

int main(){
    int paraMiktari;
    printf("lütfen bir para miktari giriniz: ");
    scanf("%d",&paraMiktari);//degiskenin adresine yaz.

    printf("%d adet 200TL bulunmaktadır.\n",paraMiktari/200);
    paraMiktari%=200;//paraMiktari=paraMiktari%200
    printf("%d adet 100TL bulunmaktadır.\n",paraMiktari/100);
    paraMiktari%=100;
    printf("%d adet 50TL bulunmaktadır.\n",paraMiktari/50);
    paraMiktari%=50;
    printf("%d adet 20TL bulunmaktadır.\n",paraMiktari/20);
    paraMiktari%=20;
    printf("%d adet 10TL bulunmaktadır.\n",paraMiktari/10);
    paraMiktari%=10;
    printf("%d adet 5TL bulunmaktadır.\n",paraMiktari/5);
    paraMiktari%=5;
    printf("%d adet 1TL bulunmaktadır.\n",paraMiktari/1);
    
    /*
    1480TL=7 ADET 200TL BULUNMAKTADIR.
    80TL=0 ADET 100TL BULUNMAKTADIR.
    80TL=1 ADET 50TL BULUNMAKTADIR.
    30TL=1 ADET 20TL BULUNMAKTADIR.
    10TL=1 ADET 10TL BULUNMAKTADIR.
    0TL
    */ 
    return 0;
}