//Created by 23343068_Hanna Fadilah

#include <stdio.h>

int main() {
    int durasi = 3; 
    int tarif_pertama = 15000; 
    float tarif_berikutnya = 0.5 * tarif_pertama; 
 
    //  total biaya
    int total_biaya = tarif_pertama + (durasi - 1) * tarif_berikutnya;

    // Menampilkan total biaya
    printf("Total Biaya: Rp %d\n", total_biaya);

    return 0;
}