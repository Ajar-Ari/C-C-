#include <stdio.h>

int main(void) {
    int n, a, i;
    int sum = 0;
    double ave;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &a);
        sum += a;
    }

    ave = (double)sum / n;

    printf("%.2f", ave);

    return 0;
}
