#include <stdio.h>

int main() {
    float sisi, luas;

    printf("Masukkan panjang sisi: ");
    scanf("%f", &sisi);

    luas = sisi * sisi;

    printf("Luas kotak = %.2f\n", luas);

    return 0;
}
