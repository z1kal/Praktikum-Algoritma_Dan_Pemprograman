#include <stdio.h>

int i;

void main()
{
    i = 1;
    do
    {
        printf("%d\n", i);
        i = i + 1;
    } 
    while (i <= 10);
}