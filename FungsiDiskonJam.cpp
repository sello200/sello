#include <stdio.h>

float hitungDiskon(float total, int jam) {
    if (jam > 5) {
        return 0.1 * total;
    }
    return 0;
}
