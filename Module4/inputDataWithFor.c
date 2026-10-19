#include <stdio.h>
#include <stdlib.h>

int nilai,n,i;
char nama[100];

void main()
{
    system("cls");

    printf("Banyak Data :");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        printf("Nilai : ");
        scanf("%d",&nilai); getchar();
        printf("Nama : "); gets(nama);
    }
}