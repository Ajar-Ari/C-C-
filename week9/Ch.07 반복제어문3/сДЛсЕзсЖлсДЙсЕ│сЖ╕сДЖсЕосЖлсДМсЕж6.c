#include <stdio.h>

int main(void) {
    int i, j;
    int num = 1;
    char ch = 'a';

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 5; j++) {
            if (j <= i) {
                printf("%c", ch++);
            }
            else {
                printf("%d", num++);
            }

            if (j < 5) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
