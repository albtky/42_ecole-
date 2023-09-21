#include <stdio.h>
int main(int argc, char *argv[])
{
    char a = 'a';
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] == a)
            {
                printf("a\n");
                break;
            }
            else
            {
                printf("\n");
                break;
            }
            i++;
        }
    }
    else if (argc < 2)
    {
        printf("a\n");
    }
}