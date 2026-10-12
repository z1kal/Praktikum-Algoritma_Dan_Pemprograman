#include <stdio.h>

struct biodata {
    char nama[20], jurusan[20], nim[20], kelas[20];
} b;

int main()
{
    printf("Nama\t: ");
    gets(b.nama);

    printf("Jurusan\t: ");
    gets(b.jurusan);

    printf("NIM\t: ");
    gets(b.nim);

    printf("Kelas\t: ");
    gets(b.kelas);

    printf("Biodata Anda : \n");
    printf("Nama\t: %s \n", b.nama);
    printf("Jurusan\t: %s \n", b.jurusan);
    printf("NIM\t: %s \n", b.nim);
    printf("Kelas\t: %s \n", b.kelas);

    return 0;
}