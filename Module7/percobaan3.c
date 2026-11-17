#include <stdio.h>

struct alamat {
    char jalan[50];
    char kota[50];
    char provinsi[50];
};

struct mahasiswa {
    char nama[50];
    int nim;
    float nilai;
    struct alamat alamat_rumah;
};

int main() {
    struct mahasiswa mhs;

    printf("Masukkan nama mahasiswa: ");
    scanf("%49s", mhs.nama);

    printf("Masukkan NIM mahasiswa: ");
    scanf("%d", &mhs.nim);

    printf("Masukkan nilai mahasiswa: ");
    scanf("%f", &mhs.nilai);

    printf("Masukkan alamat jalan: ");
    scanf("%49s", mhs.alamat_rumah.jalan);

    printf("Masukkan kota: ");
    scanf("%49s", mhs.alamat_rumah.kota);

    printf("Masukkan provinsi: ");
    scanf("%49s", mhs.alamat_rumah.provinsi);

    printf("\nData Mahasiswa:\n");
    printf("Nama: %s\n", mhs.nama);
    printf("NIM: %d\n", mhs.nim);
    printf("Nilai: %.2f\n", mhs.nilai);

    printf("\nAlamat Rumah:\n");
    printf("Jalan: %s\n", mhs.alamat_rumah.jalan);
    printf("Kota: %s\n", mhs.alamat_rumah.kota);
    printf("Provinsi: %s\n", mhs.alamat_rumah.provinsi);

    return 0;
}