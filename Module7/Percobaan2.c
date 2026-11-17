#include <stdio.h>

int main() {
    int angka[] = {10, 20, 30, 40, 50};
    int *ptr = angka;

    ptr++;
    printf("Setelah menaikkan pointer:\n");
    printf("Alamat: %p, Nilai: %d\n", ptr, *ptr);

    ptr--;
    printf("Setelah melakukan dekrementasi pointer:\n");
    printf("Alamat: %p, Nilai: %d\n", ptr, *ptr);

    ptr += 3;
    printf("Setelah menambahkan 3 ke pointer:\n");
    printf("Alamat: %p, Nilai: %d\n", ptr, *ptr);

    ptr -= 2;
    printf("Setelah mengurangkan 2 dari pointer:\n");
    printf("Alamat: %p, Nilai: %d\n", ptr, *ptr);

    return 0;
}