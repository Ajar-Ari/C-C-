#include <stdio.h>

int main(void) {
    int a, i;
    int even = 0;
    int odd = 0;

    for (i = 1; i <= 10; i++) {
        scanf("%d", &a);

        if (a % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    printf("even : %d\n", even);
    printf("odd : %d\n", odd);

    return 0;
}
