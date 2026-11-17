#include <stdio.h>
#include <stdlib.h>

struct mahasiswa {
    char nama[50];
    int nim;
    float nilai;
};

int main() {
    struct mahasiswa *ptr_mhs;

    ptr_mhs = (struct mahasiswa *) malloc(sizeof(struct mahasiswa));

    if (ptr_mhs == NULL) {
        printf("Alokasi memori gagal.\n");
        return 1;
    }

    printf("Masukkan nama mahasiswa: ");
    scanf("%49s", ptr_mhs->nama);

    printf("Masukkan NIM mahasiswa: ");
    scanf("%d", &ptr_mhs->nim);

    printf("Masukkan nilai mahasiswa: ");
    scanf("%f", &ptr_mhs->nilai);

    printf("\nData Mahasiswa:\n");
    printf("Nama: %s\n", ptr_mhs->nama);
    printf("NIM: %d\n", ptr_mhs->nim);
    printf("Nilai: %.2f\n", ptr_mhs->nilai);

    free(ptr_mhs);

    return 0;
}