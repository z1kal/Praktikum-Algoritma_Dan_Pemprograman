#include <stdio.h>

struct Time {
    int totalDetik;
    int jam;
    int menit;
    int detik;
};

int main() {
    struct Time time;
    
    printf("Masukkan detik: ");
    scanf("%d", &time.totalDetik);

    time.jam = time.totalDetik / 3600;           
    time.detik = time.totalDetik % 3600;    
    time.menit = time.detik / 60;            
    time.detik = time.detik % 60;      

    printf("Total waktu dari %d detik adalah: %d Jam %d Menit %d Detik\n", time.totalDetik, time.jam,
         time.menit, time.detik);

    return 0;
}