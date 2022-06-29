#include<stdio.h>
#include<stdlib.h>
int main(){    
    int sayi,geciciSayi;
    printf("Lütfen tersi alinacak 3 basamakli sayiyi giriniz: ");
    scanf("%d",&sayi);
    geciciSayi=sayi;
    
    //123
    //321
    
    printf("Sayimizin duz hali: %d\t ",sayi);
    printf("Sayimizin ters hali: ");
    printf("%d",geciciSayi%10);//3.basamaktaki sayiyi yazdi.
    geciciSayi/=10;//geciciSayi=geciciSayi/10
    printf("%d",geciciSayi%10);//2.basamaktaki sayiyi yazdi.
    geciciSayi/=10;//geciciSayi=geciciSayi/10
    printf("%d",geciciSayi%10);//1.basamaktaki sayiyi yazdi.
    geciciSayi/=10;//geciciSayi=geciciSayi/10

    return 0;
}
