
#include <unistd.h>
void ft_putchar(char c)
{    
        write(1, &c, 1);
}

int ft_strlen(char *setere)
{
    int k = 0;
    while (*setere)
    {
        k++;
        setere++;
    }
    return (k);
}
int main()
{
    char str[] = "bulutlar, yarime selam soyleyin";
    int i = 0;
    int k = ft_strlen(str);
    while (str[i] && str[k] != 32 && i < k - 1)
    {
        if ((str[i] >= 33 && str[i] <= 126))
        {
            ft_putchar(str[i]);
        }
        if (str[i] == 32)
        {
            return (0);
        }
        i++;
    }
    return (0);
}
