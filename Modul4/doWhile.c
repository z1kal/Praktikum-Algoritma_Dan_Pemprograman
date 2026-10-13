#include <stdio.h>

int i;

int main()
{
    i = 1;
    do
    {
        printf("%d\n", i);
        i = i + 1;
    } while (i <= 10);
    return 0;
}