#include <stdio.h>

int check2(char *s, char c)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int check1(char *s, char c, int pos)
{
    int i = 0;
    while (i < pos)
    {
        if (s[i] == c)
            return (0);
        i++;
    }
    return (1);
}

void ftunion(char *s1, char *s2)
{
    int i = 0;
    while (s1[i])
    {
        if (check1(s1, s1[i], i) == 1)
            printf("%c", s1[i]);
        i++;
    }
    i = 0;
    while (s2[i])
    {
        if (check2(s1, s2[i]) == 1)
        {
            if (check1(s2, s2[i], i) == 1)
                printf("%c", s2[i]);
        }
        i++;
    }
}
int main(int argc, char *argv[])
{
    if (argc == 3)
        ftunion(argv[1], argv[2]);
    printf("\n");
    return (0);
}