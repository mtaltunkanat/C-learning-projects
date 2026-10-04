#include <stdio.h>
#include <math.h>


int main(){

    double taban,kuvvet,sonuc;
     
    //kullanıcıdan 2 sayi al
    printf("Taban degerini giriniz: ");
    scanf("%lf",&taban);
    printf("kuvvet degerini giriniz: ");
    scanf("%lf",&kuvvet);

    sonuc = pow(taban,kuvvet);

    printf("%.2lf ^ %.2lf = %.2lf",taban,kuvvet,sonuc);

    return 0 ;
}