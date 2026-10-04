#include <stdio.h>

int main()
{
    char ogrenci_notu;

    printf("Ogrenci notunu giriniz: ");

    /* getchar() ile tek karakter oku */
    ogrenci_notu = getchar();

    /* Okunan karakteri ekrana yazdir */
    putchar(ogrenci_notu);

    return 0;
}