#include <stdio.h>

int main() {
    float panjang, lebar, luas;
    
    printf("Masukkan panjang: ");
    scanf("%f", &panjang);

    printf("Masukkan lebar: ");
    scanf("%f", &lebar);

    luas = panjang * lebar;

    printf("Luas persegi panjang = %.2f\n", luas);

    return 0;
}
