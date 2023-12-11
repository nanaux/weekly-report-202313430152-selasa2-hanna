//Created by 23343068_Hanna Fadilah

#include <stdio.h>

int main() {
    float nilai_kehadiran, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
    char hasil_kelulusan;

    // Input nilai kehadiran, tugas, UTS, dan UAS
    printf("Masukkan nilai kehadiran : ");
    scanf("%f", &nilai_kehadiran);

    printf("Masukkan nilai tugas : ");
    scanf("%f", &nilai_tugas);

    printf("Masukkan nilai UTS : ");
    scanf("%f", &nilai_uts);

    printf("Masukkan nilai UAS : ");
    scanf("%f", &nilai_uas);

    // Menghitung nilai akhir
    nilai_akhir = 0.2 * nilai_kehadiran + 0.2 * nilai_tugas + 0.25 * nilai_uts + 0.35 * nilai_uas;

    // Menentukan hasil kelulusan berdasarkan rentang nilai akhir
    if (nilai_akhir >= 91 && nilai_akhir <= 100) {
        hasil_kelulusan = 'A' ;
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else if (nilai_akhir >= 86 && nilai_akhir <= 90) {
        hasil_kelulusan = 'A-' ;
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else if (nilai_akhir >= 81 && nilai_akhir <= 85) {
        hasil_kelulusan = 'B+' ;
        printf("Anda lulus, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 76 && nilai_akhir <= 80) {
        hasil_kelulusan = 'B' ;
        printf("Anda lulus, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 66 && nilai_akhir <= 75) {
        hasil_kelulusan = 'B-' ;
        printf("Anda lulus, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 56 && nilai_akhir <= 65) {
    	hasil_kelulusan = 'C' ;
    	printf("Anda lulus, tingkatkan lagi kedepannya!\n");
	} else {
		hasil_kelulusan = 'D' ;
		printf("Maaf, anda tidak lulus!\n");
	}

    // Menampilkan nilai akhir dan hasil kelulusan
    printf("Nilai akhir: %.2f\n", nilai_akhir);
    printf("Hasil kelulusan: %c\n", hasil_kelulusan);

    return 0;
}
