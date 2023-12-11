//created by hanna fadilah_23343068
#include <stdio.h>

// Deklarasi fungsi rekursif untuk menghitung perkalian
int perkalian(int a, int b) {
    if (b == 1) {
        return a;
    } else {
        return a + perkalian(a, b - 1);
    }
}

int main() {
    int num1 = 12;
    int num2 = 6;

    int hasil = perkalian(num1, num2);

    printf("%d x %d = %d\n", num1, num2, hasil);

    return 0;
}
