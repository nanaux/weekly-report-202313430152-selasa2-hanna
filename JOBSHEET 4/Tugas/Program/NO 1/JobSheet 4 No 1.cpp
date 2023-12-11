//Created by 23343068_Hanna Fadilah

#include <stdio.h>

int main() {
    int totalDetik, jam, menit, detik;

    // memasukkan total detik 
    printf("Masukkan total detik: ");
    scanf("%d", &totalDetik);

    // Menghitung jam, menit, dan detik
    jam = totalDetik / 3600;
    totalDetik = totalDetik % 3600; //sisa detik digunakan untuk melakukan pembagian selanjutnya
    menit = totalDetik / 60;
    detik = totalDetik % 60; //maksud % 60 adalah untuk menampilkan sisa detik yang di tampilkan menjadi detik

    // Menampilkan hasil
    printf("Konversi menjadi jam:\n");
    printf("Jam: %d, Menit: %d, Detik: %d\n", jam, menit, detik);
     
    printf("Waktu = %d:%d:%d\n", jam, menit, detik);
    
    return 0;
}