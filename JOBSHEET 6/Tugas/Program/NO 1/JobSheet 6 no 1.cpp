//Created by 23343068_Hanna Fadilah
#include <stdio.h>

int main() {
    printf("Deret Bilangan Genap dan Ganjil dari 0 hingga 50:\n");

    // Mencetak bilangan genap
    printf("Bilangan Genap: ");
    for (int i = 0; i <= 50; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    // Mencetak bilangan ganjil
    printf("Bilangan Ganjil: ");
    for (int i = 1; i <= 50; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
