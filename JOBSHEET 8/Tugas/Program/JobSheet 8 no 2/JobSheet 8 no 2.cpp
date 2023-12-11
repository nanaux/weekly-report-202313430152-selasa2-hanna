//created by hanna fadilah_23343068
#include <stdio.h>

// Deklarasi fungsi untuk operasi penjumlahan
int tambah(int a, int b) {
    return a + b;
}

// Deklarasi fungsi untuk operasi pengurangan
int kurang(int a, int b) {
    return a - b;
}

// Deklarasi fungsi untuk operasi perkalian
int kali(int a, int b) {
    return a * b;
}

// Deklarasi fungsi untuk operasi pembagian
float bagi(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        return 0.0;
    }
}

int main() {
    int num1 = 12;
    int num2 = 6;

    int hasilTambah = tambah(num1, num2);
    int hasilKurang = kurang(num1, num2);
    int hasilKali = kali(num1, num2);
    float hasilBagi = bagi(num1, num2);

    printf("%d + %d = %d\n", num1, num2, hasilTambah);
    printf("%d - %d = %d\n", num1, num2, hasilKurang);
    printf("%d x %d = %d\n", num1, num2, hasilKali);
    printf("%d / %d = %.2f\n", num1, num2, hasilBagi);

    return 0;
}
