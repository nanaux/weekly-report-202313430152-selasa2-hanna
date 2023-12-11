//Created by 23343068_Hanna Fadilah

#include <stdio.h>

// Struktur untuk menyimpan informasi tanggal lahir
struct TanggalLahir {
    int tanggal;
    int bulan;
    int tahun;
};

// Fungsi untuk menentukan zodiak berdasarkan tanggal lahir
const char* tentukanZodiak(struct TanggalLahir tanggalLahir) {
    // Array zodiak berurutan sesuai dengan bulan
    const char* zodiak[] = {
        "CAPRICORN", "AQUARIUS", "PISCES", "ARIES", "TAURUS", "GEMINI",
        "CANCER", "LEO", "VIRGO", "LIBRA", "SCORPIO", "SAGITTARIUS"
    };

    // Tanggal batas awal zodiak
    int batasTanggal[] = {20, 19, 20, 20, 21, 21, 22, 23, 23, 23, 22, 21};

    // Menentukan indeks zodiak berdasarkan bulan dan tanggal
    int indeksZodiak = (tanggalLahir.bulan - 1 + (tanggalLahir.tanggal >= batasTanggal[tanggalLahir.bulan - 1])) % 12;

    return zodiak[indeksZodiak];
}

int main() {
    struct TanggalLahir tanggalLahir;

    // Meminta input tanggal lahir dari pengguna
    printf("Masukkan Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tanggalLahir.tanggal, &tanggalLahir.bulan, &tanggalLahir.tahun);

    // Menampilkan zodiak
    printf("Zodiak Anda adalah : %s\n", tentukanZodiak(tanggalLahir));

    return 0;
}
