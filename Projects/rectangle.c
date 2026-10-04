#include <stdio.h>

int main(){
    float en,boy,alan,cevre;
    printf("Eni giriniz:");
    scanf("%f",&en);
    printf("Boyu giriniz:");
    scanf("%f",&boy);
    
    alan = en * boy;
    printf("Alan:%f\n",alan);
    cevre= 2 * (en+boy);
    printf("Cevre:%f",cevre);
}