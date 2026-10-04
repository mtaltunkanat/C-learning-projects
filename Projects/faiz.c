#include <stdio.h>
#include <math.h>

int main(){

    float ana_para,zaman,faiz_orani,basit_faiz_miktari,bilesik_faiz_miktari;

    printf("Ana parayi giriniz:");
    scanf("%f",&ana_para);
    printf("Faiz ornanini giriniz:");
    scanf("%f",&faiz_orani);
    printf("zamani giriniz:");
    scanf("%f",&zaman);
    basit_faiz_miktari = ana_para * faiz_orani * zaman / 100;
    
    printf("Basit faiz miktari ile hesaplanan faiz miktari: %f\n",basit_faiz_miktari);

    bilesik_faiz_miktari = ana_para * (pow((1+faiz_orani/100),zaman));
    printf("Bilesik faiz miktari ile hesaplanan faiz miktari: %f\n",bilesik_faiz_miktari);

    return 0 ;
}