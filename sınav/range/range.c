#include <stdlib.h>
#include <stdio.h>

int *range(int start, int end)
{
    int size = end - start;
    int *ret = (int *)malloc(sizeof(int) * (size + 1));
    int i = 0;
    while (i < size + 1)
    {
        if (start <= end)
        {
            ret[i] = start;
            start++;
        }
        i++;
    }

    return (ret);
}
int main()
{
    int a = 5;
    int b = 10;
    int *tab = range(a, b);
    int k = 0;
    while (tab[k] != '\0')
    {
        printf("%d\n", tab[k]);
        k++;
    }
    printf("\n");
    return (0);
}