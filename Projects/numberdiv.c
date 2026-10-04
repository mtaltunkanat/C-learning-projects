#include <stdio.h>
int main(){
  
   int sayi1=5,sayi2=17;
 
   int tamsayi_bolme;
   float gercel_sayi_bolme_float;
   double gercel_sayi_bolme_double;
   int gercel_sayi_bolmeyi_tamsayi_gosterme_float;

   tamsayi_bolme=sayi2/sayi1;
   printf("Tamsayi bolme sonucu:%d\n",tamsayi_bolme);
   gercel_sayi_bolme_float=(float)sayi2/sayi1;
   printf("Gerçel sayi bolmesi sonucu(float):%.20f\n",gercel_sayi_bolme_float);
   gercel_sayi_bolme_double=(double)sayi2/sayi1;
   printf("Gerçel sayi bolme sonucu(double):%.20f\n",gercel_sayi_bolme_double);
   gercel_sayi_bolmeyi_tamsayi_gosterme_float=gercel_sayi_bolme_float;
   printf("Gerçel sayi gosterme sonucu(float)'i tamsayi gosterme:%d\n",gercel_sayi_bolmeyi_tamsayi_gosterme_float);


   return 0;
}