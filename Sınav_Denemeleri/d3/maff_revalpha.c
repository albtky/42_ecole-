#include <unistd.h>

int main()
{
	char Z = 'Z';
	char z='z';
	while(z <= 'a')
	{
		if(z <= 'z' && z >= 'a')
		{
			write(1, &z, 1);
			z--;
			Z--;
		}
		if(Z <='Z' && Z >='A')
		{
			write(1, &Z, 1);
			z--;
			Z--;
		}
	}
		
}

