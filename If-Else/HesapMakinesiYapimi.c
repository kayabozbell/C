#include<stdio.h>
#include<stdlib.h>

int main(){
    float sayi1,sayi2,sonuc;
    char ch;

    printf("**********HESAP MAKİNESİ**********\n\n\n");
    printf("Islem yapmak istediginiz ilk sayiyi giriniz: ");
    scanf("%f",&sayi1);
    fflush(stdin);//Bundan sonra gelecek scanf komutunu da alabilmemizi saglar scanf(%c)lerde sıkıntı cıkabiliyor. Bufferi temizlemek için bu komutu kulllanıyoruz.Bir sonraki scanf komutunu da alabiliyoruz.
    printf("Hangi islemi yapmak istediginizi yandaki sembollerle gösteriniz.(+,-,*,/): ");
    scanf("%c",&ch);
    printf("Islem yapmak istediginiz ikinci sayiyi giriniz: ");
    scanf("%f",&sayi2);
    printf("Girdiginiz birinci sayi: %f\nGirdiginiz islem: %c\nGirdiginiz ikinci sayi: %f\n",sayi1,ch,sayi2);

    if(ch== '+') {
        printf("Girdiginiz islemin sonucu: %f",sayi1+sayi2);
    }
    else if(ch== '-'){
        printf("Girdiginiz islemin sonucu: %f",sayi1-sayi2);
    }
    else if(ch== '*'){
        printf("Girdiginiz islemin sonucu: %f",sayi1*sayi2);
    }
    else if(ch=='/'){
        if (sayi2!=0){
            printf("Girdiginiz islemin sonucu: %f",sayi1/sayi2);
        }
        else{
            printf("Sayilar 0'a bolunemez.");
        }
    }
    else{
        printf("Hatali bir islem girdiniz programi yeniden baslatiniz.");
    }
}