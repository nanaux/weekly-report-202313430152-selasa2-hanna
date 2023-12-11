//Created by 23343068_Hanna Fadilah

#include <stdio.h>

int main() {
    double total_pembelian;
    double diskon = 0;
    double cashback = 0;

    printf("Masukkan total pembelian (dalam Rp): ");
    scanf("%lf", &total_pembelian);

    if (total_pembelian <= 75000) {
        diskon = 0.05 * total_pembelian;
    } else if (total_pembelian > 75000 && total_pembelian <= 125000) {
        diskon = 0.15 * total_pembelian;
    } else {
        diskon = 0.25 * total_pembelian;
        cashback = 5000;
    }

    double total_bayar = total_pembelian - diskon + cashback;

    printf("Total pembelian: Rp. %.2lf\n", total_pembelian);
    printf("Diskon: Rp. %.2lf\n", diskon);
    printf("Cashback: Rp. %.2lf\n", cashback);
    printf("Total yang harus dibayar: Rp. %.2lf\n", total_bayar);

    return 0;
}