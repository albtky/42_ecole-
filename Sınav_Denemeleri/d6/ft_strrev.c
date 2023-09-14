
int ft_strlen(char *str)
{
	int len = 0;
	while(str[len]!='\0')
	{
		len++;
	}
	return (len);
}

char *ft_strrev(char *str)
{ 
	int i =0;
	int j = ft_strlen(str)-1; 
	char change; 
	while (i <j)
	{
		change = str[i];
		str[i] = str[j];
		str[j] = change;
		i++;
		j--;
	}
	return(str);

}
#include <stdio.h>

int main()
{
	char s[] = "alperen";
	printf("%s", ft_strrev(s));
	printf ("\n");
	return (0);
}
