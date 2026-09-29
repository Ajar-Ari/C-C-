#include <stdio.h>

void printNumbers(int n)
{
    if (n == 0)
    {
        return;
    }
    printNumbers(n - 1);
    printf("%d\n", n);
}

int main()
{
    int n;

    printf("정수 n을 입력하세요: ");
    scanf("%d", &n);

    printNumbers(n);

    return 0;
}