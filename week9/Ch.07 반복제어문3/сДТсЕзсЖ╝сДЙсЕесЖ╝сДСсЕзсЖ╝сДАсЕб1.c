#include <stdio.h>

int main(void) {
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= 2 * n - 1; i++) {
        int count;

        if (i <= n) {
            count = i;
        }
        else {
            count = 2 * n - i;
        }

        for (j = 1; j <= count; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
