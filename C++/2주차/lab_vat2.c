#include <stdio.h>

int main() {
    int maxV, minV;
    int a = 900, b = 800;

    maxV = (a > b) ? a : b;
    minV = (a < b) ? a : b;

    printf("Большее из 900 и 800: %d\n", maxV);
    printf("Меньшее из 900 и 800: %d\n", minV);

    return 0;
} 