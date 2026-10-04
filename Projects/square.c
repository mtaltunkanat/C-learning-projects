#include <stdio.h>
#include <math.h> //M_PI sayısını kullanmak amaç

int main (){

    float cap,yaricap,cevre,alan;

    printf("Cemberin/Dairenin yaricapini giriniz:");
    scanf("%f",&yaricap);

    cap= 2* yaricap;
    cevre= 2 * M_PI * yaricap;
    alan= M_PI * (yaricap * yaricap);

    printf("Cemberin/Dairenin capi: %.2f Birimdir\n",cap);
    printf("Cemberin/Dairenin cevresi: %.2f Birimdir\n",cevre);
    printf("Cemberin/Dairenin alani: %.2f Birimkaredir\n", alan);


    return 0;
}

