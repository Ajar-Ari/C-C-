#include <stdio.h>

int main(void)
{
    int a[100];
    int n = 0;
    int x;
    int i;

    while (n < 100)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            break;
        }
        a[n] = x;
        n++;
    }
    for (i = 1; i < n; i += 2)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}