#include <stdio.h>

int fun(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return fun(n-1)*n;
	}
}
void main()
{
	printf("%d\n",fun(5));
	return ;
}
