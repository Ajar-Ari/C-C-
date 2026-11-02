#include <stdio.h>

int main(void) {
    int n, i, j;
    int num = 0;
    char ch = 'A';

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j <= n - i + 1) {
                printf("%c", ch++);
            }
            else {
                printf("%d", num++);
            }

            if (j < n) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
