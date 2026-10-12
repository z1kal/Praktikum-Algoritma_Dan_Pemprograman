#include <stdio.h>
#include <string.h>

typedef struct {
    char user[20];
    char pass[20];
    char role[15];
} User;

int main() {
    User db_user[] = {
        {"admin",  "admin123", "Admin"},
        {"zikal",  "lakiz",  "Mahasiswa"},
        {"dosen1", "dosen123", "Dosen"}
    };

    int total_user = sizeof(db_user) / sizeof(db_user[0]);

    char input_user[20], input_pass[20];
    int logged_in = 0;

    printf("Username: ");
    scanf("%s", input_user);
    printf("Password: ");
    scanf("%s", input_pass);

    for (int i = 0; i < total_user; i++) {
        if (strcmp(db_user[i].user, input_user) == 0 && strcmp(db_user[i].pass, input_pass) == 0) {
            printf("\nKamu %s login sebagai %s\n", db_user[i].user,db_user[i].role);
            logged_in = 1;
            break;
        }
    }

    if (!logged_in) {
        printf("\nUsername atau password salah.\n");
    }

    return 0;
}