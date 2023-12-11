//Created by 23343068_Hanna Fadilah

#include <stdio.h>
#include <math.h>

int main() {
    int pilihan;
    double hasil, r, s, p, l, t;

    printf("Pilih bentuk Bangun Ruang:\n");
    printf("1. Bola\n");
    printf("2. Kubus\n");
    printf("3. Balok\n");
    printf("4. Tabung\n");
    printf("Masukkan pilihan (1/2/3/4): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Masukkan jari-jari bola (r): ");
            scanf("%lf", &r);
            hasil = 4 * M_PI * r * r;
            printf("Luas permukaan bola: %.2lf\n", hasil);
            break;
        case 2:
            printf("Masukkan panjang sisi kubus (s): ");
            scanf("%lf", &s);
            hasil = 6 * s * s;
            printf("Luas permukaan kubus: %.2lf\n", hasil);
            break;
        case 3:
            printf("Masukkan panjang (p), lebar (l), dan tinggi (t) balok: ");
            scanf("%lf %lf %lf", &p, &l, &t);
            hasil = 2 * (p * l + p * t + l * t);
            printf("Luas permukaan balok: %.2lf\n", hasil);
            break;
        case 4:
            printf("Masukkan jari-jari tabung (r) dan tinggi (t): ");
            scanf("%lf %lf", &r, &t);
            hasil = 2 * M_PI * r * r + 2 * M_PI * r * t;
            printf("Luas permukaan tabung: %.2lf\n", hasil);
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
