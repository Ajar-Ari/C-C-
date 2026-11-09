#include <stdio.h>

int main(void)
{
    char c[26];
    int i;

    for (i = 0; i < 26; i++)
    {
        c[i] = 'A' + i;
    }
    for (i = 25; i >= 0; i--)
    {
        printf("%c ", c[i]);
    }
    printf("\n");

    return 0;
}