#include <unistd.h>

void put(char c)
{
	write(1, &c, 1);	
}

int main(int argc, char **argv)
{
	int i=0;
	int k=0;
	if (argc ==3)
	{
		while(argv[1][k])
		{
			while(argv[2][i])
			{
				if(argv[1][k]==argv[2][i])
				{
					put(argv[1][k]);
					k++;
				}
				i++;
			}
		
		}
	}
	write(1, "\n", 1);

	return(0);
}
