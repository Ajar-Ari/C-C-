#include <stdio.h>

int main() {
    const double TAX_RATE = 0.04;
    double price;
    double total;

    printf("식사의 가격을 입력: ");
    scanf("%lf", &price);

    total = price + (price * TAX_RATE);

    printf("최종 가격: %.2f", total);

    return 0;
}
