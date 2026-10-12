#include<stdio.h>

#define phi 3.14

int main()
{
    //const float phi = 3.14;
    float r;
    float luas;

    printf("Masukan jari-jari lingkaran = ");
    scanf("%f", &r);

    luas = phi * r * r;

    printf("Luas lingkaran = %.2f \n", luas);

    return 0;
}