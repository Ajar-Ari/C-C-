#include <stdio.h>

int main(void) {
    int n, a;
    int i;
    int sum = 0;
    double ave;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &a);
        sum += a;
    }

    ave = (double)sum / n;

    printf("%.1f\n", ave);

    if (ave >= 80) {
        printf("pass");
    }
    else {
        printf("fail");
    }

    return 0;
}
