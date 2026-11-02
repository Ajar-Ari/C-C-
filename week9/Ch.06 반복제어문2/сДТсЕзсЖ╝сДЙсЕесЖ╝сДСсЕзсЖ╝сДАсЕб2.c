#include <stdio.h>

int main(void) {
    int a, b, i;
    int min, max;

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
        printf("%d ", i);
    }

    return 0;
}
