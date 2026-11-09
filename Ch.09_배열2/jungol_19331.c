#include <stdio.h>

int main(void)
{
    int a[4][2];
    int i, j;
    int rowsum[4] = {0};
    int colsum[2] = {0};
    int total = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
            rowsum[i] += a[i][j];
            colsum[j] += a[i][j];
            total += a[i][j];
        }
    }

    for (i = 0; i < 4; i++)
    {
        printf("%d ", rowsum[i] / 2);
    }
    printf("\n");
    for (j = 0; j < 2; j++)
    {
        printf("%d ", colsum[j] / 4);
    }
    printf("\n");
    printf("%d\n", total / 8);

    return 0;
}