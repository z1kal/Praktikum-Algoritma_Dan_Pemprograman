#include <stdio.h>
#include <string.h>

char user[50] = "Zikal";
char pass[50] = "masuk";

int main()
{
    char username[50], password[50];

    printf("Login User!\n");

    printf("Username : ");
    gets(username);
    printf("Password : ");
    gets(password);

    if (strcmp(user, username) == 0 || strcmp(pass, password) == 0)
    {
        printf("Login Sukses \n");
        printf("Silahkan Lanjutkan\n");
    }
    else printf("Login Gagal\n");
    return 0;
}