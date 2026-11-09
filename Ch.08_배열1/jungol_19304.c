#include <stdio.h>

int main(void)
{
    char c[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf(" %c", &c[i]);
    }
    for (i = 9; i >= 0; i--)
    {
        printf("%c ", c[i]);
    }
    printf("\n");

    return 0;
}