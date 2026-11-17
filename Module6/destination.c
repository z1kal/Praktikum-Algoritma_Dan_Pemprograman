#include <stdio.h>
#include <string.h>

int main(void) {
    char src[20 + 1];
    char dst_1[40 + 1], dst_2[40 + 1];

    printf("Insert a string (~20 letters): ");
    fgets(src, 20, stdin);
    src[strlen(src) - 1] = '\0';

    strcpy(dst_1, src);
    strncpy(dst_2, src, 40);
    strcat(dst_1, " is really amazing!");
    strncat(dst_2, " is a fun experiment!", 40);

    printf("Source: %s\n", src);
    printf("Destination 1: %s\n", dst_1);
    printf("Destination 2: %s\n", dst_2);

    return 0;
}