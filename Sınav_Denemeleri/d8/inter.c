#include <unistd.h>

int dc(char *str, char c, int size)
{
	int i =0;
	while (i < size)
	{
		if(str[i]==c)
			return (0);
		i++;
	}
return(1);
}



int main(int argc, char **argv)
{
	int i;
	int k=0;
	if (argc ==3)
	{
		while(argv[1][k])
		{
			i=0;
			while(argv[2][i])
			{
				if(argv[1][k]==argv[2][i])
				{	
					if (dc(argv[1], argv[1][k], k) == 1)
					{
						write(1,&argv[1][k],1);
						break;
					}
					
				}
				i++;
				
			}
			k++;
		
		}
	}
	write(1, "\n", 1);

	return(0);
}
