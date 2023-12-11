//Created by 23343068_Hanna Fadilah
#include <stdio.h>

int main() {
    int tinggi;

    // Meminta input tinggi segitiga dari pengguna
    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &tinggi);

    // Mencetak pola bintang segitiga siku-siku
    for (int i = 1; i <= tinggi; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
