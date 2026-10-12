#include <stdio.h>

struct modulo
{
    // Mendeklarasikan variabel dalam struct
    int x, y;
};

int main()
{
    struct modulo mod;

    printf("Bilangan 1 %% Bilangan 2\n");
    printf("Contoh Masukkan:\n");
    printf("10 4 \n");

    printf("Hasil Modulo: 2\n");

    printf("Masukkan Bilangan: \n");
    scanf("%d %d", &mod.x, &mod.y);

    printf("Hasil Modulo: %d", mod.x % mod.y);

    return 0;
}