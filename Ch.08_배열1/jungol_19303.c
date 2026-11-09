#include <stdio.h>

int main(void)
{
    int score[10];
    int i;
    int sum = 0;
    int odd = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &score[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 1)
        {
            sum += score[i];
        }
        else
        {
            odd += score[i];
        }
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", odd / 5.0);

    return 0;
}