#include <stdio.h>

int main(void)
{
    int s[5][4];
    int i, j;
    int sum;

    for (i = 0; i < 5; i++)
    {
        sum = 0;
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &s[i][j]);
            sum += s[i][j];
        }
        printf("%d %.1f\n", sum, sum / 4.0);
    }

    return 0;
}