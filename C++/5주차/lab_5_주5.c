#include <stdio.h>

int main()
{
    int a, b, c;
    long long n;
    int count[10] = {0};

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    n = (long long)a * b * c;

    while (n > 0)
    {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for (int i = 0; i < 9; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}