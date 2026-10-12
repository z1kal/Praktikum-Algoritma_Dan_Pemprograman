#include <stdio.h>

int main() {
    int bil;

    printf("Angka: ");
    scanf("%d", &bil);

    if (bil % 2 == 0) {
        printf("Bilangan Genap\n");
    } 

    else {
        printf("Bilangan Ganjil\n");
    }
    return 0;
}