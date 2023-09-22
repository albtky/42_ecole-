#include <stdio.h>
#include <unistd.h>

int ftlen(char *s)
{
    int i = 0;
    while (s[i])
    {
        i++;
    }
    return (i);
}
void ftputstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char *av[])
{

    int i = 0;
    int j = 0;
    int wlen = 0;
    if (ac == 3)
    {
        while (av[1][i])
        {
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    wlen++;
                    break;
                }
                j++;
            }
            i++;
        }
        if (ftlen(av[1]) == wlen)
        {
            ftputstr(av[1]);
            printf("\n");
        }
        else
            printf("\n");
        return (0);
    }
}
