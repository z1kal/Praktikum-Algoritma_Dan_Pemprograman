#include <stdio.h>

struct {
    char nama[20];
    char nim[20];
    int nilai;
} mahasiswa[100];

int main() {
    int i, n;

    printf("Banyaknya mahasiswa : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Mahasiswa ke-%d\n", i+1);
        printf("Nama\t: ");
        scanf(" %[^\n]", mahasiswa[i].nama);
        printf("NIM\t: ");
        scanf(" %[^\n]", mahasiswa[i].nim);
        printf("Nilai\t: ");
        scanf("%d", &mahasiswa[i].nilai);
    }

    printf("\nData Mahasiswa\n");
    for(i = 0; i < n; i++) {
        printf("Mahasiswa %d\n", i+1);
        printf("Nama\t: %s\n", mahasiswa[i].nama);
        printf("NIM\t: %s\n", mahasiswa[i].nim);
        printf("Nilai\t: %d\n", mahasiswa[i].nilai);
    }

    return 0;
}