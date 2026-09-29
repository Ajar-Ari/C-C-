#include <stdio.h>

int main()
{
    int count[7] = {0};
    int dice;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &dice);
        count[dice]++;
    }

    for (int i = 1; i <= 6; i++)
    {
        printf("%d : %d\n", i, count[i]);
    }

    return 0;
}