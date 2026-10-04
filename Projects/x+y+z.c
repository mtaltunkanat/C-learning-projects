#include <stdio.h>

int main() {
    int x=5, y=15,z=115;
    printf("%d", x+y+z);
    printf("\n...\n");

    x=y=z=50;
    printf("%d", x+y+z);
    return 0;
}