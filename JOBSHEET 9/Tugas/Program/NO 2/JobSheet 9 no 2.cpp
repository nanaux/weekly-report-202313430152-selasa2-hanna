//created by Hanna Fadilah_23343068
#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100];
    printf("Masukkan kalimat: ");
    gets(kalimat); // Disarankan menggunakan scanf atau fgets jika memungkinkan

    int panjang = strlen(kalimat);
    printf("Kebalikannya: ");
    for (int i = panjang - 1; i >= 0; i--) {
        printf("%c", kalimat[i]);
    }

    printf("\n");

    return 0;
}