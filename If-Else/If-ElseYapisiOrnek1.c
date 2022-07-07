#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    
    int sayi1,sayi2;
    srand(time(NULL));//"Her seferinde başka bir sayinin içeri girmesini ve içeride dönmesini sagliyor."
    sayi1=rand()%100;//0 ile 100 arasinda random sayi secer.
    sayi2=rand()%100+7;//7 ile 107 arasinda random sayi secer.
    printf("birinci sayi: %d\nikinci sayi: %d\n",sayi1,sayi2);

    if(sayi1<sayi2){
        printf("%d degeri %d degerinden kucuktur.",sayi1,sayi2);    
    }
    else if(sayi1>sayi2){
        printf("%d degeri %d degerinden buyuktur.",sayi1,sayi2);
    }
    else{
        printf("%d degeri %d degerine esittir.");    
    }


    return 0;

}