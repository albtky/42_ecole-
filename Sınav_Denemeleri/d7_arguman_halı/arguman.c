
#include <unistd.h>

void put(char c)
{
	write(1, &c, 1);	
}

int len(char *c)
{
	int i = 0;
	while(c[i])
		i++;
	return(i);
}

int main(int argc, char **argv)
{	
	int i =0;
	
	while (argv[1][i] !='\0' && argc > 1)
	{
		
		while(argv[1][i] == 32)
		{
			i++;
		}
		if(len(argv[1]) != 1)
		{
			while(argv[1][i] >=33 && argv[1][i] <=126)
			{				
				put(argv[1][i]);
				i++;
			}
		write(1, "\n", 1);
		return(0);
		}
		write(1, "\n", 1);
		return(0);
	}
}

//eğer arguman sayısı 2 ise olması lazım. a.out 1, text1 2 oluyor. Minimum 2 arguman sayısı olması gerektiği için if ( argc == 2) şartını ilk while döngüsü yerine koyulabilikoyulabilir.  
