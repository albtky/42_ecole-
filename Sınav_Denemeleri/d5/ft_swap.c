void ft_swap(int *a, int *b)
{
	int change; 
	change = *a;
	*a = *b;
	*b = change; 	
}
#include <stdio.h>
int main()
{
	int a=3; 
	int b=1; 
	ft_swap(&b,&a);

	printf("%i, %i",a,b);
   return (0);	
}
