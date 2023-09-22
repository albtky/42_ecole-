// union ++
// inter ++
// range ++
// last_word ++
// first_word ++
// rot13 ++
// itoa
// atoi
#include <stdio.h>
#include <stdlib.h>

int ftatoi(const char *s)
{
    int i = 0;
    int result = 1;
    int sign = 0;

    while (s[i] == 32 || s[i] == '\t')
        i++;

    if (s[i] == 45)
    {
        result *= -1;
        i++;
    }
    else if (s[i] == 43)
        i++;
    while (!(s[i] >= '0' && s[i] <= '9' && s[i]))
        i++;    

    while (s[i] >= '0' && s[i] <= '9' && s[i])
    {
        sign *= 10;
        sign += s[i] - '0';
        i++;
    }
    return (sign * result);
}
int main(void)
{
    char *set = "  -+1231312lkasnda";
    int a = ftatoi(set);
    printf("%d\n", a);
    return (0);
}