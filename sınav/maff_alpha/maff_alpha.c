#include <stdio.h>
int main()
{
    char a = 'a';
    char A = 'A';
    int i = 97;
    while (i <= 122)
    {
        if (i % 2 == 0)
        {
            printf("%c", a);
            a++;
            A++;
        }
        else if (i % 2 == 1)
        {
            printf("%c", A);
            a++;
            A++;
        }
        i++;
    }
}