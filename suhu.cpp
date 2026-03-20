#include <stdio.h>

int main() {
    float c, f;

    printf("Masukkan suhu Celsius: ");
    scanf("%f", &c);

    f = (9.0/5.0 * c) + 32;

    printf("Suhu dalam Fahrenheit = %.2f\n", f);

    return 0;
}
