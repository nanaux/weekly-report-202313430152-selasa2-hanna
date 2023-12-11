//Created by 23343068_Hanna Fadilah

#include <stdio.h>
#include <string.h>

// Struktur untuk menyimpan informasi mahasiswa
struct Mahasiswa {
    int npm;
    char nama[50];
    char tglLahir[10];
    char alamat[50];
    long long hp;
};

int main() {
    struct Mahasiswa dataMahasiswa;
    char pilihan;

    do {
        // Meminta input data mahasiswa dari pengguna
        printf("NPM      : ");
        scanf("%d", &dataMahasiswa.npm);
        fflush(stdin); // Membersihkan buffer stdin

        printf("NAMA     : ");
        fflush(stdin); // Membersihkan buffer stdin
        fgets(dataMahasiswa.nama, sizeof(dataMahasiswa.nama), stdin);
        dataMahasiswa.nama[strcspn(dataMahasiswa.nama, "\n")] = '\0'; // Menghilangkan karakter newline

        printf("TGL LAHIR: ");
        scanf("%s", dataMahasiswa.tglLahir);

        printf("ALAMAT   : ");
        fflush(stdin); // Membersihkan buffer stdin
        fgets(dataMahasiswa.alamat, sizeof(dataMahasiswa.alamat), stdin);
        dataMahasiswa.alamat[strcspn(dataMahasiswa.alamat, "\n")] = '\0'; // Menghilangkan karakter newline

        printf("HP       : ");
        scanf("%lld", &dataMahasiswa.hp);

        // Menampilkan data mahasiswa
        printf("%d %s %s %s %lld\n", dataMahasiswa.npm, dataMahasiswa.nama,
               dataMahasiswa.tglLahir, dataMahasiswa.alamat, dataMahasiswa.hp);

        // Meminta input untuk memasukkan data lagi atau tidak
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &pilihan);

    } while (pilihan == 'y' || pilihan == 'Y');

    return 0;
}
