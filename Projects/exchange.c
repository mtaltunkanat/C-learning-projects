#include <stdio.h>

 int main(){
    
    float metre,cm,km;

    printf("lutfen cm turunden uzunluk giriniz:");
    scanf("%f", &cm);

    metre= cm/100.0;
    km=cm/100000.0;
    
    printf("cm'nin metre turunden degeri:%.3f\n",metre);
    printf("cm'nin km turunden degeri:%.3f",km);
 
 
    return 0 ;
}