//Created by 23343068_Hanna Fadilah

#include <stdio.h>

int main() {
    char pilihan;
    float bilangan1, bilangan2, hasil;

    // Menampilkan menu
    printf("Kalkulator Sederhana\n");
    printf("a) Penjumlahan\n");
    printf("b) Pengurangan\n");
    printf("c) Perkalian\n");
    printf("d) Pembagian\n");
    printf("e) Hasil Bagi\n");

    // Meminta input pilihan dari pengguna
    printf("Pilih operasi (a/b/c/d/e): ");
    scanf(" %c", &pilihan);

    // Meminta input dua bilangan dari pengguna
    printf("Masukkan bilangan pertama: ");
    scanf("%f", &bilangan1);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &bilangan2);

    // Melakukan operasi sesuai dengan pilihan
    switch (pilihan) {
        case 'a':
            hasil = bilangan1 + bilangan2;
            printf("Hasil penjumlahan: %.2f\n", hasil);
            break;
        case 'b':
            hasil = bilangan1 - bilangan2;
            printf("Hasil pengurangan: %.2f\n", hasil);
            break;
        case 'c':
            hasil = bilangan1 * bilangan2;
            printf("Hasil perkalian: %.2f\n", hasil);
            break;
        case 'd':
            if (bilangan2 != 0) {
                hasil = bilangan1 / bilangan2;
                printf("Hasil pembagian: %.2f\n", hasil);
            } else {
                printf("Error: Bilangan kedua tidak boleh nol untuk pembagian.\n");
            }
            break;
        case 'e':
            if (bilangan2 != 0) {
                hasil = (int)bilangan1 / (int)bilangan2; // Mengambil bagian bulat dari hasil bagi
                printf("Hasil bagi (bagian bulat): %.0f\n", hasil);
            } else {
                printf("Error: Bilangan kedua tidak boleh nol untuk hasil bagi.\n");
            }
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
