//created by hanna fadilah_23343068
#include <stdio.h>

// Deklarasi fungsi untuk menghitung besar potongan
float potong(float totalPembelian);

int main() {
    float totalPembelian, diskon, totalSetelahDiskon;

    // Meminta pengguna untuk memasukkan total pembelian
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%f", &totalPembelian);

    // Memanggil fungsi potong() untuk menghitung besarnya potongan
    diskon = potong(totalPembelian);

    // Menghitung total yang harus dibayarkan setelah diskon
    totalSetelahDiskon = totalPembelian - diskon;

    // Menampilkan hasil
    printf("Besar Diskon : %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan : %.2f\n", totalSetelahDiskon);

    return 0;
}

// Definisi fungsi potong() untuk menghitung besar potongan
float potong(float totalPembelian) {
    float diskon;
    
    if (totalPembelian < 1000000) {
        // Tidak ada diskon
        diskon = 0;
    } else if (totalPembelian >= 1000000 && totalPembelian < 3000000) {
        // Diskon 20%
        diskon = totalPembelian * 0.2;
    } else {
        // Diskon 35%
        diskon = totalPembelian * 0.35;
    }
    
    return diskon;
}
