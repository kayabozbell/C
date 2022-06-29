#include <stdio.h>
#include <stdlib.h>

int main(){
    
    printf("Lütfen alanini ve cevresini bulmak istediginiz daire'nin yaricap'ini giriniz: ");
    float yaricap;
    scanf("%f",&yaricap);
    float pi=3.14;
    printf("Yaricapini girmis oldugunuz daire'nin alani: %.4f\n",pi*yaricap*yaricap);
    printf("Yaricapini girmis oldugunuz daire'nin cevresi: %.4f",2*pi*yaricap);

    return 0;
}