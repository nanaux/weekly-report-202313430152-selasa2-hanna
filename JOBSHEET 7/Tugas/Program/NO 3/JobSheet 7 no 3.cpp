//Created by 23343068_Hanna Fadilah
#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];

    strcpy(username, "user123");
    strcpy(password, "pass123");

    char inputUsername[20];
    char inputPassword[20];

    printf("Masukkan username: ");
    scanf("%s", inputUsername);

    printf("Masukkan password: ");
    scanf("%s", inputPassword);

    if (strcmp(inputUsername, username) == 0 && strcmp(inputPassword, password) == 0) {
        printf("Berhasil login\n");
    } else {
        printf("Password salah\n");
    }

    return 0;
}