#include <stdio.h>
void hello(int count)
{
	if(count == 0)
		return 0;
	printf("Hello World! %d\n", count);
	
	hello(--count);
	printf("%d\n", count);
}
int main()
{
	hello(5);
	
	return 0;
}
