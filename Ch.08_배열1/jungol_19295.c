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
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}