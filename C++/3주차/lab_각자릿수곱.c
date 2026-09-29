// #include <stdio.h>

// int main()
// {
//     int number, product = 1;
//     int original;

//     printf("정수 입력: ");
//     scanf("%d", &number);
//     original = number;

//     while (number != 0)
//     {
//         product *= number % 10; // 마지막 자릿수를 곱함
//         number /= 10;           // 마지막 자릿수를 제거
//     }

//     printf("%d의 각 자릿수 곱: %d\n", original, product);

//     return 0;
// }

// #include <stdio.h>

// void main()
// {
//     int a, b;
//     int temp;
//     skanf("%d", &a);
//     skanf("%d", &b);

//     temp = b;
//     while (temp !=0)
//     {
//         print("%d\n", a*(temp%10));
//         temp/=10;
//     }
//     printf("%d", a*b);

// }









#include <stdio.h>

int main()
{
    int i, j;

    for (i = 5; i >= 1; i--)
    { 
        for (j = 1; j <= i; j++)
        { 
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
