#include <stdio.h>

int main(void) {
    int n, i, j;
    int num = 1;
    char ch = 'A';

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n + 1; j++) {
            if (j <= n - i + 1) {
                printf("%d", num++);
            }
            else {
                printf("%c", ch++);
            }

            if (j < n + 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
