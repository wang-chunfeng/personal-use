#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j;
	int tmp;
	int val;
	int len;
	int num[10] = {0};
	printf("请输入数组长度：\n");
	scanf("%d",&len);
	for(i = 0;i<len;i++)
	{	
		scanf("%d",&num[i]);
	}
	for(i = 0;i<len;i++)
	{
		for(j = 0;j<len-i-1;j++)
		{
			if(num[j]>num[j+1])
			{
				tmp = num[j+1];
				num[j+1] = num[j];
				num[j] = tmp;
			}
		}
	}
	for(i = 0;i<len;i++)
	{
		printf("%d ",num[i]);
	}
		