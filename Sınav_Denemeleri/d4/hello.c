#include <unistd.h>
int main()
{
	write(1, "hello world\n", 13);
	return (0);
}
