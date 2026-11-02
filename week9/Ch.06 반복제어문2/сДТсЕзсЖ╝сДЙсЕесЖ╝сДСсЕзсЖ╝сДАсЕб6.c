#include <stdio.h>

int main(void) {
    int a, b, i;
    int min, max;
    int sum = 0;
    int count = 0;
    double ave = 0;

    scanf("%d %d", &a, &b);

    if (a < b) {
        min = a;
        max = b;
    }
    else {
        min = b;
        max = a;
    }

    for (i = min; i <= max; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            count++;
        }
    }

    if (count > 0) {
        ave = (double)sum / count;
    }

    printf("%d\n", sum);
    printf("%.1f\n", ave);

    return 0;
}
