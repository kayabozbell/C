#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int a,b,c;
    float delta;
    printf("Lütfen a,b ve c degerlerini giriniz: ");
    scanf("%d%d%d",&a,&b,&c);

    delta= b*b-4*a*c;
    printf("Girmis oldugunuz sonuclardan dolayi delta degeriniz: %.2f\n",delta);
    printf("deltanizin sorgusu: %d",delta>=0);

    return 0;
}