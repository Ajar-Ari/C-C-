#include <stdio.h>

int main(void) {
    int a, b, i, j;

    scanf("%d %d", &a, &b);

    for (i = 1; i <= 9; i++) {
        if (a >= b) {
            for (j = a; j >= b; j--) {
                printf("%d * %d = %2d", j, i, j * i);
                if (j > b) printf("   ");
            }
        }
        else {
            for (j = a; j <= b; j++) {
                printf("%d * %d = %2d", j, i, j * i);
                if (j < b) printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}
