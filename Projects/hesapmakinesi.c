#include <stdio.h>

int main(){

    int toplam,cikartma,carpma,mod;
    float bolme;
    int sayi1,sayi2;
    
    /*kullanıcıdan sayıları al*/
    printf("lutfen 2 sayi giriniz(aralarinda bosluk olacak sekilde)");
    scanf("%d%d", &sayi1 , &sayi2);

    toplam=sayi1 + sayi2;
    cikartma=sayi1 - sayi2; 
    carpma= sayi1 * sayi2;
    bolme=(float)sayi1 / sayi2;
    mod=sayi1 % sayi2;

    printf("toplam: %d\n", toplam);
    printf("cikartma: %d\n",cikartma);
    printf("carpma: %d\n", carpma);
    printf("bolme: %f\n", bolme);
    printf("mod: %d\n", mod);
    return 0;
}