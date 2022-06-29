#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int vize,final,vizeort,finalort,can,puan;
    printf("Lütfen vize notunuzu giriniz: \n");
    scanf("%d",&vize);
    printf("vize notunuz : %d\n",vize);
    printf("Lütfen final notunuzu giriniz: \n");
    scanf("%d",&final);
    printf("final notunuz : %d\n",final);
    printf("Lütfen vizenin yüzde kacinin alinacagini giriniz(40): \n");
    scanf("%d",&vizeort);
    finalort=100-vizeort;
    puan=(finalort/100)*final+(vizeort/100)*vize;
    printf("Lütfen can degerini giriniz: \n");
    scanf("%d",&can);
    printf("Dersi gecebilme durumunuz: %d\n",puan>can);

    return 0;
}