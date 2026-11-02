#include <stdio.h>

int main(void) {
    int a;
    int sum = 0;
    int count = 0;
    double avg = 0;

    for (;;) {
        scanf("%d", &a);

        if (a < 0 || a > 100) {
            break;
        }

        sum += a;
        count++;
    }

    avg = (double)sum / count;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}
