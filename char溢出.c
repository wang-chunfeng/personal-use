#include <stdio.h>

int main(void)
{
    unsigned char i = 256;
    int a;
    a = i + 256;
    i = a;
    printf("%d\n",i);
	printf("%d\n",a);
  
	return 0;
}

