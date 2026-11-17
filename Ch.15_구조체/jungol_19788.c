#include <stdio.h>
#include <string.h>

struct Info
{
    char name[101];
    char tel[101];
    char addr[101];
};

int main(void)
{
    struct Info p[3];
    int i;
    int first = 0;

    for (i = 0; i < 3; i++)
    {
        scanf("%s %s %s", p[i].name, p[i].tel, p[i].addr);
    }

    for (i = 1; i < 3; i++)
    {
        if (strcmp(p[i].name, p[first].name) < 0)
        {
            first = i;
        }
    }

    printf("name : %s\n", p[first].name);
    printf("tel : %s\n", p[first].tel);
    printf("addr : %s\n", p[first].addr);

    return 0;
}