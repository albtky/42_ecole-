#include <stdlib.h>
#include <stdio.h>

int *range(int start, int end)
{
    int size = end - start;
    int *ret = (int *)malloc(sizeof(int) * size);
    int i = 0;
    while (i <= size + 1)
    {
        if (start != end + 1)
        {
            ret[i] = start;
            start++;
            i++;
        }
    }
    ret[i] = '\0';
    return (ret);
}
int main()
{
    int a = 5;
    int b = 10;
    int *tab = range(a, b);
    int k = 0;
    while (tab[k])
    {
        printf("%i", tab[k]);
        k++;
    }
}
