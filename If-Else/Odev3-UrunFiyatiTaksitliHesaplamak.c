#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

    int urunFiyati,urunTaksit;
    char kullaniciSecimi;
    float urunFaizliFiyat,urunAyBasiFiyat;
    srand(time(NULL));
    urunFiyati=(rand()%(2000-100+1)) + 100;
    
    
    
    printf("Almis oldugunuz urunun fiyati: %d\n",urunFiyati);
    printf("Taksit uygulanmasini ister misiniz:(Evet ise E ,Hayır ise H yaziniz.): ");
    fflush(stdin);
    scanf("%c",&kullaniciSecimi);
    
    
    
    
    
    if (kullaniciSecimi=='E'){
        printf("Kac taksit uygulanmasini istersiniz? (3-6-9-12): ");
        scanf("%d",&urunTaksit);
        printf("Uygulamak istediginiz taksit miktari %d olarak belirlenmistir.",urunTaksit);
        urunFaizliFiyat=urunFiyati+urunFiyati*urunTaksit/10;
        urunAyBasiFiyat=urunFaizliFiyat/urunTaksit;

        printf("%d taksit uyguladiginiz %d fiyatli ürün,her ay %f olmak üzere toplamda %f kadar masrafa yol acacaktir.",urunTaksit,urunFiyati,urunAyBasiFiyat,urunFaizliFiyat);
    }
    else if(kullaniciSecimi=='H'){
        printf("Odemeniz gereken miktar: %d TL'dir.",urunFiyati);
    }
    else {
        printf("Hatali tuslama yaptiniz.");
    }
    
 

    return 0;
}