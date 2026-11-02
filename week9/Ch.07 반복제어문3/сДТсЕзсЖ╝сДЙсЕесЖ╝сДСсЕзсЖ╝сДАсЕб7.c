#include <stdio.h>

int main(void) {
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= 2 * n - 1; i++) {
        int start, count;

        if (i <= n) {
            start = 0;
            count = i;
        }
        else {
            start = i - n;
            count = 2 * n - i;
        }

        for (j = 0; j < start; j++) {
            printf("  ");
        }

        for (j = 1; j <= count; j++) {
            if (j > 1) printf(" ");
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
