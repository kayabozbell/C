    #include<stdio.h>
    #include<stdlib.h>

    int main(){
    int sayi=55,sayi2=2;//atama operatoru
    printf("%d+%d=%d\n",sayi,sayi2,sayi+sayi2);//toplama operatoru
    printf("%d-%d=%d\n",sayi,sayi2,sayi-sayi2);//cıkarma operatoru
    printf("%d*%d=%d\n",sayi,sayi2,sayi*sayi2);//carpma operatoru
    printf("%d/%d=%d\n",sayi,sayi2,sayi/sayi2);//bolme operatoru
    printf("%d%%%d=%d\n",sayi,sayi2,sayi%sayi2);//mod alma operatoru

    //atama operatoru ile kullanımı
    int sonuc=1;
    sonuc*=4;//sonuc= sonuc*4;
    sonuc*=3;
    sonuc*=2;
    printf("Sonuc: %d\n",sonuc);

    int i=5;
    printf("i degeri: %d\n",i++);//önce yazdırma, sonra arttırma
    printf("i degeri: %d\n",i);
    printf("i degeri: %d\n",++i);//önce arttırma, sonra yazdırma

    //BIT DUZEYINDE ISLEMLER

    int bitDuzeyi=64;
    printf("Sola kaydirilmis sonuc: %d\n",bitDuzeyi<<1);
    printf("Saga kaydirilmis sonuc:%d\n",bitDuzeyi>>1);

    //64= 0100 0000    1 bit sola kaydırınca--->> 1000 0000;2^7=128
    //64= 0100 0000    1 bit saga kaydırınca<<--- 0010 0000;2^5=32

    return 0;
}