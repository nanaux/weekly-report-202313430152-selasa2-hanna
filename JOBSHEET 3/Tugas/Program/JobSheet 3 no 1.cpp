//Created by 23343068_Hanna Fadilah
#include <stdio.h>

int main() {
    float kurs_dollar = 14250;  // Kurs 1$ = Rp. 14.250
    float jumlah_rupiah = 2500000;  // Jumlah uang dalam Rupiah yang akan dikonversi
    float jumlah_dollar;

    jumlah_dollar = jumlah_rupiah / kurs_dollar;

    printf("Jumlah Dollar yang diterima: $%.2f\n", jumlah_dollar);

    return 0;
}