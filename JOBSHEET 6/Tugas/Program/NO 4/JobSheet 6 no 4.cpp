//Created by 23343068_Hanna Fadilah
#include <stdio.h>

int saldo = 175000;  // Saldo awal Hattori

void cekSaldo() {
    printf("Saldo Anda saat ini: Rp. %d\n", saldo);
}

void setoran(int jumlah) {
    saldo += jumlah;
    printf("Setoran berhasil. Saldo Anda saat ini: Rp. %d\n", saldo);
}

void penarikan(int jumlah) {
    if (saldo - jumlah >= 50000) {
        saldo -= jumlah;
        printf("Penarikan berhasil. Saldo Anda saat ini: Rp. %d\n", saldo);
    } else {
        printf("Maaf, saldo minimal yang harus disisakan adalah Rp. 50.000\n");
    }
}

int main() {
    int pilihan, jumlah;

    do {
        printf("\nATM\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                cekSaldo();
                break;
            case 2:
                printf("Masukkan jumlah setoran: Rp. ");
                scanf("%d", &jumlah);
                setoran(jumlah);
                break;
            case 3:
                printf("Masukkan jumlah penarikan: Rp. ");
                scanf("%d", &jumlah);
                penarikan(jumlah);
                break;
            case 4:
                printf("Terima kasih!\n");
                break;
            default:
                printf("Pilihan tidak valid\n");
        }
    } while (pilihan != 4);

    return 0;
}