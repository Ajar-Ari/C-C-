#include <stdio.h>

struct Person
{
    char name[50];
    int height;
};

int main(void)
{
    struct Person p[5];
    int i;
    int low = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%s %d", p[i].name, &p[i].height);
    }

    for (i = 1; i < 5; i++)
    {
        if (p[i].height < p[low].height)
        {
            low = i;
        }
    }

    printf("%s %d\n", p[low].name, p[low].height);

    return 0;
}