#include <stdio.h>

int main(void) {
    double a, b, area;
    char ch;

    for (;;) {
        scanf("%lf %lf", &a, &b);

        area = a * b / 2.0;

        printf("Triangle width = %.1f\n", area);
        printf("Continue? ");

        scanf(" %c", &ch);

        if (ch != 'Y' && ch != 'y') {
            break;
        }
    }

    return 0;
}
