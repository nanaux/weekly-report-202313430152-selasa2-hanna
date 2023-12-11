//Created by 23343068_Hanna Fadilah

#include <stdio.h>

int main() {
    char NamaPembeli[100];
    char NamaBarang[100];
    float HargaBarangSatuan;
    int JumlahBarang;
    float HargaTotal;

    // input nama pembeli
    printf("Masukkan nama pembeli: ");
    scanf("%s", NamaPembeli);

    // input nama barang
    printf("Masukkan nama barang: ");
    scanf("%s", NamaBarang);

    // input harga barang satuan
    printf("Masukkan harga barang satuan: ");
    scanf("%f", &HargaBarangSatuan);

    // input jumlah barang yang dibeli
    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &JumlahBarang);

    // Menghitung harga total
    HargaTotal = HargaBarangSatuan * JumlahBarang;

    // Menampilkan hasil
    printf("\nStruk Pembelian\n");
    printf("Nama Pembeli: %s\n", NamaPembeli);
    printf("Nama Barang: %s\n", NamaBarang);
    printf("Harga Barang Satuan: %.2f\n", HargaBarangSatuan);
    printf("Jumlah Barang: %d\n", JumlahBarang);
    printf("Harga Total: %.2f\n", HargaTotal);

    return 0;
}