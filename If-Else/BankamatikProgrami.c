#include <stdio.h>
#include <stdlib.h>

int main(){

    float kullaniciBakiyesi=1250.0,kullaniciMiktar,gunlukLimit=500.0;
    int islem;
    printf("\tMerhabalar, Hosgeldiniz\n");
    printf("Para yatirmak icin 1\nPara cekmek icin 2\nHesap bakiyesi goruntulemek icin 3'e basiniz.");
    scanf("%d",&islem);

    if (islem==1){
        printf("Yatirmak istediginiz miktari giriniz: ");
        scanf("%f",&kullaniciMiktar);
        if(kullaniciMiktar==0){
            printf("Lutfen belirtilen surede para girisi yapiniz.");
            scanf("%f",&kullaniciMiktar);
        }
        else{
        kullaniciBakiyesi+=kullaniciMiktar;
        printf("Isleminiz basariyla gerceklesti. Tesekkur ederiz. Yeni bakiyeniz: %f",kullaniciBakiyesi);
        }
    }
    else if(islem==2){
        printf("Cekmek istediginiz para miktarini giriniz: ");
        scanf("%f",&kullaniciMiktar);
        if (kullaniciMiktar>kullaniciBakiyesi){
            printf("Hesabinizda o kadar para bulunmamaktadir. Islem gerceklestirilemiyor.");
        }
        else if(kullaniciMiktar>gunlukLimit){
            printf("Gunluk para cekme limitini astiniz. Islem gerceklestirilemiyor.");
        }
        else{
            kullaniciBakiyesi-=kullaniciMiktar;
            printf("Isleminiz basariyla gerceklesmistir. Yeni bakiyeniz:%f",kullaniciBakiyesi);
        }
    }
    else if(islem==3){
        printf("Mevcut bakiyeniz: %f",kullaniciBakiyesi);

    }

    else {
        printf("Hatali tuslama yaptiniz yeniden deneyiniz.");
    }
    return 0;
}