//created by hanna fadilah_23343068
#include <stdio.h>

// Deklarasi fungsi untuk menghitung luas lingkaran
float hitungLuasLingkaran(float jariJari);

// Deklarasi fungsi untuk menghitung keliling lingkaran
float hitungKelilingLingkaran(float jariJari);

int main() {
    float jariJari;
    float luas, keliling;

    // Meminta pengguna untuk memasukkan jari-jari lingkaran
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);

    // Memanggil fungsi untuk menghitung luas dan keliling lingkaran
    luas = hitungLuasLingkaran(jariJari);
    keliling = hitungKelilingLingkaran(jariJari);

    // Menampilkan hasil luas dan keliling lingkaran
    printf("Luas lingkaran dengan jari-jari %.2f adalah %.2f\n", jariJari, luas);
    printf("Keliling lingkaran dengan jari-jari %.2f adalah %.2f\n", jariJari, keliling);

    return 0;
}

// Definisi fungsi untuk menghitung luas lingkaran
float hitungLuasLingkaran(float jariJari) {
    float luas;
    // Rumus luas lingkaran: p * jari-jari * jari-jari
    luas = 3.14159265359 * jariJari * jariJari;
    return luas;
}

// Definisi fungsi untuk menghitung keliling lingkaran
float hitungKelilingLingkaran(float jariJari) {
    float keliling;
    // Rumus keliling lingkaran: 2 * p * jari-jari
    keliling = 2 * 3.14159265359 * jariJari;
    return keliling;
}
