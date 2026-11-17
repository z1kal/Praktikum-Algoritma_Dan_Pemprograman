#include <stdio.h>

int main() {
    int tutl = 10;
    int *ruang_dascom;

    ruang_dascom = &tutl;
    printf("Nilai tutl: %d\n", tutl);
    printf("nilai tult sebelumnya diubah: %d\n", tutl);

    *ruang_dascom = 1001;
    printf("nilai tult sebelumnya diubah: %d\n", tutl);
    return 0;
}