#include <stdio.h>

void bilangan(int a){
    if(a>0) printf("Positive");
    else if(a<0) printf("Negative");
    else printf("Zero");
}

int main(){
    int x;
    printf("Angka: ");
    scanf("%d", &x);
    bilangan(x);
    return 0;
}