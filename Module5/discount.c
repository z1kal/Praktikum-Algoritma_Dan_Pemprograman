#include <stdio.h>

int total, diskon, total_diskon, total_biaya;

int hitung(int x, int y);

int main() {
    
    printf("Total: ");
    scanf("%d", &total);

    printf("Masukan berapa persen diskon yangn di dapat: ");
    scanf("%d", &diskon);
    total_diskon = hitung(total,diskon);
    printf("Diskon yang di dapat = Rp %d\n", total_diskon);
    total_biaya = total-total_diskon;
    printf("Biaya setelah diskon = Rp. %d", total_biaya);
    return 0;
}

int hitung(int x, int y) {
    int biaya_diskon;
    biaya_diskon = (x * y) / 100;
    return biaya_diskon;
}