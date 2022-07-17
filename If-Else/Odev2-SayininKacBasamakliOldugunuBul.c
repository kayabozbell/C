#include <stdio.h>
#include <stdlib.h>

int main(){
    ///Kullanicinin rastgele ürettigi bir sayinin kac basamakli oldugunu bul.(Dongu kullanma/Max 5basamak.)
    
    int sayi;
    printf("Lütfen basamak sayisinin bulunmasini istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);
    printf("Basamak sayisini ogrenmek istediginiz sayi: %d\n",sayi);

    if (sayi>=0){
        if (sayi<10){
            printf("Girmis oldugunuz %d sayisi 1 basamaklidir.",sayi);      
    }
            else if (sayi<100){
                printf("Girmis oldugunuz %d sayisi 2 basamaklidir.",sayi);          
        }
            else if (sayi<1000){
                printf("Girmis oldugunuz %d sayisi 3 basamaklidir.",sayi);      
        }
            else if (sayi<10000){
                printf("Girmis oldugunuz %d sayisi 4 basamaklidir.",sayi);      
    }
    }
    else{
        printf("Girmis oldugunuz %d sayisi 0'dan kücüktür.",sayi);
    }

    return 0 ;

}