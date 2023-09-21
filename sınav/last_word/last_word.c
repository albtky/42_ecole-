#include <stdio.h>

int length(char *c)
{
    int i = 0;
    while (c[i])
    {
        i++;
    }
    return (i);
}
void print(char c)
{
    printf("%c", c);
}
int main(int argc, char *argv[])
{
    int i = length(argv[1] - 1);
    if (argc == 2)
    {

        while (argv[1][i] == 32)
            i--;
        while (i > 0)
        {
            if (argv[1][i] == 32)
            {
                break;
            }
            i--;
        }
        i++;
        while (argv[1][i] != 32 || argv[1][i] != '\t' || argv[1][i])
        {
            print(argv[1][i]);
            i++;
        }
        print('\n');
    }
}