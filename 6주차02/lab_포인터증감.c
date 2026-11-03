#include <stdio.h>

int main()
{
    int x, r;
    int *p = &x;

    x = 10;
    r = (*p)++;
    printf("(*p)++   : r=%d, x=%d\n", r, x);

    x = 10;
    r = (*p) + 1;
    printf("(*p)+1   : r=%d, x=%d\n", r, x);

    x = 10;
    *p += 1;
    printf("*p+=1    : x=%d\n", x);

    x = 10;
    (*p) += 1;
    printf("(*p)+=1  : x=%d\n", x);

    x = 10;
    *p = *p + 1;
    printf("*p=*p+1  : x=%d\n", x);

    x = 10;
    r = ++*p;
    printf("++*p     : r=%d, x=%d\n", r, x);

    x = 10;
    r = ++(*p);
    printf("++(*p)   : r=%d, x=%d\n", r, x);

    // *p++ : значение берём, потом сдвигаем адрес (как обход массива)
    int a[3] = {1, 2, 3};
    int *q = a;
    printf("*q++ : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *q++);
    }
    printf("\n");

    return 0;
}