#include <stdio.h>

int main()
{
    int count[11] = {0};
    int score;

    while (1)
    {
        scanf("%d", &score);
        if (score == 0)
            break;
        int group = (score + 9) / 10;
        count[group]++;
    }

    for (int i = 10; i >= 1; i--)
    {
        if (count[i] > 0)
        {
            printf("%d : %d\n", i * 10, count[i]);
        }
    }

    return 0;
}
