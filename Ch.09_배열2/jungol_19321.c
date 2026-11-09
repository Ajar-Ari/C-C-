#include <stdio.h>

int main(void)
{
    int s[4][4] = {0};
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &s[i][j]);
            s[i][3] += s[i][j];
            s[3][j] += s[i][j];
            s[3][3] += s[i][j];
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}