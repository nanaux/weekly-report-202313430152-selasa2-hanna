//Created by 23343068_Hanna Fadilah
#include <stdio.h>

int main() {
    int jumlahSiswa, i;

    printf("Input banyak siswa: ");
    scanf("%d", &jumlahSiswa);

    char namaSiswa[jumlahSiswa][50];  // Array untuk menampung nama mahasiswa

    for (i = 0; i < jumlahSiswa; i++) {
        printf("Input nama mahasiswa %d: ", i+1);
        scanf("%s", namaSiswa[i]);
    }

    printf("Nama-nama mahasiswa:\n");
    for (i = 0; i < jumlahSiswa; i++) {
        printf("Nama mahasiswa ke-%d: %s\n", i+1, namaSiswa[i]);
    }

    return 0;
}