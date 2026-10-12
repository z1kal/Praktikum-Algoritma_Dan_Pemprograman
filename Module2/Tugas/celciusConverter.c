#include <stdio.h>

struct Temperature {
    float celcius;
    float fahrenheit;
    float kelvin;
    float reamur;
};

int main() {
    struct Temperature temp;
    printf("Masukkan suhu Celcius: ");
    scanf("%f", &temp.celcius);

    temp.fahrenheit = (9.0 / 5.0) * temp.celcius + 32;
    temp.kelvin = temp.celcius + 273.15;
    temp.reamur = (4.0 / 5.0) * temp.celcius;

    printf("\nHasil konversi suhu\n");
    printf("Celcius    : %.2f C\n", temp.celcius);
    printf("Fahrenheit : %.2f F\n", temp.fahrenheit);
    printf("Kelvin     : %.2f K\n", temp.kelvin);
    printf("Reamur     : %.2f R\n", temp.reamur);

    return 0;
}