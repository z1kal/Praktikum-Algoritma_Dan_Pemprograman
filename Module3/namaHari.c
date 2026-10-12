#include <stdio.h>

int i;

void main ()
{
    printf("Masukkan urutan hari :");
    scanf("%d",&i);

    switch (i)
    {
    case 1:
    printf("Senin"); break;
    case 2:
    printf("Selasa"); break;
    case 3:
    printf("Rabu"); break;
    case 4:
    printf("Kamis"); break;
    case 5:
    printf("Jumat"); break;
    case 6:
    printf("Sabtu"); break;
    case 7:
    printf("Minggu"); break;
    default:
    printf("Angka di luar urutan hari"); break;
    }
}
