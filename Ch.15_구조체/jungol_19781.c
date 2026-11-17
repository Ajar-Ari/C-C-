#include <stdio.h>

struct Student
{
    char name[50];
    int score;
};

int main(void)
{
    struct Student s[5];
    int i;
    int best = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%s %d", s[i].name, &s[i].score);
    }

    for (i = 1; i < 5; i++)
    {
        if (s[i].score > s[best].score)
        {
            best = i;
        }
    }

    printf("%s %d\n", s[best].name, s[best].score);

    return 0;
}