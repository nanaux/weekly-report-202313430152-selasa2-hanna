//Created by 23343068_Hanna Fadilah
#include <stdio.h>

int main() {
    int nilai[20];
    int i;
    float total = 0;
    float rata;

    printf("Masukkan nilai dari 20 mahasiswa:\n");
    for (i = 0; i < 20; i++) {
        printf("Nilai mahasiswa ke-%d: ", i+1);
        scanf("%d", &nilai[i]);
        total += nilai[i];
    }

    rata = total / 20;
    printf("Rata-rata nilai mahasiswa adalah: %.2f\n", rata);

    return 0;
}