#include<stdio.h>
#include<stdlib.h>
int  main(){

    int sayi1=15,sayi2=25;
    printf("ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 ise yanlis,1 ise dogru):%d\n",sayi1,sayi2,sayi1>sayi2);//buyuk mu? 
    printf("ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 ise yanlis,1 ise dogru):%d\n",sayi1,sayi2,sayi1<sayi2);//kucuk mu? 
    printf("ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 ise yanlis,1 ise dogru):%d\n",sayi1,sayi2,sayi1==sayi2);//esit mi?
    printf("ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 ise yanlis,1 ise dogru):%d\n",sayi1,sayi2,sayi1!=sayi2);//esit degil mi?
    printf("ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 ise yanlis,1 ise dogru):%d\n",sayi1,sayi2,(sayi1!=sayi2)&&(sayi1<sayi2));//ve operatoru
    printf("ilk sayi:%d, ikinci sayi:%d,sorgu sonucu(0 ise yanlis,1 ise dogru):%d\n",sayi1,sayi2,(sayi1!=sayi2)||(sayi1<sayi2));//veya operatoru? 

    //BIT DUZEYINDEKI MANTIKSAL OPERATORLER
    int bitDuzeyi=64;//0100 0000
    int bitDuzeyi2=32;//0010 0000

    printf("Ve operatoru sonuc:%d\n",bitDuzeyi & bitDuzeyi2);
    printf("Veya operatoru sonuc:%d\n",bitDuzeyi2 | bitDuzeyi);

    /*
    VE OPERATORU
    64=0100 0000
    32=0010 0000
    s =0000 0000

    VEYA OPERATORU
    64=0100 0000
    32=0010 0000
    s =0110 0000
    */  
    return 0 ;
}