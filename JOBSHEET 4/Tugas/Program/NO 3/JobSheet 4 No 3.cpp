//Created by 23343068_Hanna Fadilah

#include <stdio.h>

#define nilai_presensi 85.0
#define nilai_praktek 65.0
#define nilai_uts 80.0
#define nilai_uas 75.0
int main() {
    
    float nilai_akhir;

    // Menghitung nilai akhir
    nilai_akhir = (nilai_presensi * 0.10) + (nilai_praktek * 0.20) + (nilai_uts * 0.30) + (nilai_uas * 0.40);

    // Menampilkan nilai akhir
    printf("Nilai Akhir: %.2f\n", nilai_akhir);
    
    return 14;
}