#include <stdio.h>

void hannuota(int n,char A,char B,char C)
{
	if(n == 1)
	{
		printf("%d %c->%c\n",n,A,C);
	}
	else
	{
		hannuota(n-1,A,C,B);
		printf("%d %c->%c\n",n,A,C);
		hannuota(n-1,B,A,C);
	}
}

void main()
{
	char ch1 = 'A';
	char ch2 = 'B';
	char ch3 = 'C';
	
	int n;

	printf("请输入汉诺塔层数");
	scanf("%d",&n);

	hannuota(n,ch1,ch2,ch3);
}
