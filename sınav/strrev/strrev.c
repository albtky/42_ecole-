#include <stdio.h>

int len(char *str)
{
    int k = 0;
    while (str[k])
    {
        k++;
    }
    return (k);
}

char *strev(char *s)
{
    char tmp;
    int i = 0;
    int j = 7;
    while (i < j)
    {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }

    return (s);
}
int main()
{
    char s[] = "alperen ";
    int i = 0;
    strev(s);
    while (s[i])
    {
        printf("%c", s[i]);
        i++;
    }
    printf("\n");
    return (0);
}