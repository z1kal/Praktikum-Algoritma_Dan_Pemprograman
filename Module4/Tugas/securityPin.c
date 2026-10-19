#include <stdio.h>

void main() {
    system("cls");
    const int PIN_BENAR = 2025;
    int pin_input;
    int kesempatan = 3;

    printf("=== SMART LOCK LAB PROGRAMMING ===\n");

    do {
        printf("Masukkan PIN (Sisa percobaan: %d): ", kesempatan);
        scanf("%d", &pin_input);

        if (pin_input == PIN_BENAR) {
            printf("Akses Diterima! Selamat datang di Laboratorium.\n");
            break;
        } else {
            kesempatan--;
            printf("PIN Salah!\n");
        }
    } while (kesempatan > 0);

    if (kesempatan == 0) {
        printf("Akses Ditolak! Kesempatan habis. Sistem Terkunci!\n");
    }
}