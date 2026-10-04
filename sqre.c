#include <stdio.h>
#include <math.h>

int main(){
    
   double sayi,karekok;
  
   //kullanıcıdan sayı değerini al
   printf("Karekok'u hesaplanacak sayiyi giriniz:");
   scanf("%lf",&sayi);

   //sayının karekokunu hesapla
   karekok=sqrt(sayi);

   printf("%.2lf Sayisinin karekoku = %.2lf",sayi,karekok);

   return 0 ;   
}