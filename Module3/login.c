#include <stdio.h>
#include <string.h>

char user[50], pass[50];

int main()
{
    printf("Username : ");
    gets(user);
    printf("Password : ");
    gets(pass);

    if (strcmp(user, "Zikal") == 0 && strcmp(pass, "lakiZ") == 0){
        printf("Login Sukses \n");
        printf("Silahkan Lanjutkan\n");
    }
    else
        printf("Login Gagal\n");

    return 0;
}