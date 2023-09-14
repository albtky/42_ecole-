
#include <unistd.h>

void put(char c)
{
	write(1, &c, 1);	
}

int main(int argc, char **argv)
{	
	int i =0;
	int k =1;
	while (argv[k][i] !='\0')
	{
		i=0;
		while(argv[k][i] >=33 && argv[k][i] <=126)
		{
			put(argv[k][i]);
			i++;
		}
		
	}
}
