#include<stdio.h>
#include<time.h>

int main(){

    int sayi;
    srand(time(NULL));
    sayi=rand()%100;
    printf("Olusturulan sayiniz: %d\n",sayi);
    if(sayi%2==0){
        printf("%d sayisi cift sayidir.",sayi);
    }
    else{
        printf("%d sayisi tek sayidir.",sayi);
    }



    return 0;
}