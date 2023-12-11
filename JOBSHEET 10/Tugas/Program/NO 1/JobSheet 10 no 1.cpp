//Created by 23343068_Hanna Fadilah

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int magic_no, guess, attempts = 0;
    char play_again;

    do {
        srand(time(0)); // Mengatur seed untuk angka acak
        magic_no = rand() % 20 + 1; // Menghasilkan nomor acak antara 1 dan 20

        printf("Komputer telah memilih nomor antara 1 dan 20. Silakan tebak!\n");

        do {
            printf("Masukkan tebakan Anda: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < magic_no) {
                printf("Nomor saya lebih besar!\n");
            } else if (guess > magic_no) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, tebakanmu benar!\n");
                printf("Jumlah percobaan yang diperlukan: %d\n", attempts);
            }
        } while (guess != magic_no);

        printf("Ingin bermain lagi? (y/n): ");
        scanf(" %c", &play_again); // Menggunakan spasi sebelum %c untuk menghindari masalah input buffer

    } while (play_again == 'y');

    return 0;
}