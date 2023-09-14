
#include <unistd.h>

int main ()
{
	char A = 'A';
	char a='a';
	while ( A <= 'Z')
	{
		if (a >= 97 && a <= 122)
		{	
			write(1, &a ,1);
			a++;
			A++;
		}
		if(A>=65 && A<=90)
		{
			write(1, &A, 1);
			a++;
			A++;
		}		
}
return(0);
}
