#include <stdio.h>
#include <stdlib.h>

int nilai,n,i;
char nama[100];

int main()
{
    system("cls");

    printf("Banyak data: ");
    scanf("%d", &n);
    getchar();

    for (i = 1; i<=n;i++) {
        printf("\n Data ke-%d\n", i);

        printf("Nilai: ", &nilai);
        getchar();

        printf("Nama: ");
        scanf("%d",&nilai); 
        fgets(nama, sizeof(nama), stdin);
        getchar();
    }
    return 0;
}