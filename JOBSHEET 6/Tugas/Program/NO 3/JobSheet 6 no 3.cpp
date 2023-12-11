//Created by 23343068_Hanna Fadilah
#include <stdio.h>

int main() {
    int baris, kolom, nilai = 1;

    for (baris = 1; baris <= 5; baris++) {
        for (kolom = 1; kolom <= baris; kolom++) {
            printf("%-3d", baris * kolom);
        }
        printf("\n");
    }

    return 0;
}