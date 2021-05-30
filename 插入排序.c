#include <stdio.h>

#define MAXSIZE 10
typedef struct
{
	int r[MAXSIZE];
	int length;
}SqList;

void swap(SqList *L,int i,int j)
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}

void InsertSort(SqList *L)
{
	int i,j;
	for(i = 2;i <= L->length;i++)
	{
		if(L->r[i] < L->r[i-1])//将L->r[i]插入有序子表
		{
			L->r[0] = L->r[i];//设置哨兵
			for(j = i-1;L->r[j] > L->r[0];j--)
			{
				L->r[j+1] = L->r[j];//依次往后移动
			}
			L->r[j+1] = L->r[0];//插入到正确位置
		}
	}	
}

void main()
{
	int i;
	SqList list;
	printf("请输入数列的长度:\n");
	scanf("%d",&(list.length));
	printf("请输入待排序的数");
	for(i = 1;i <= list.length;i++)
	{
		scanf("%d",&(list.r[i]));
	}
	InsertSort(&list);
	for(i = 1;i <= list.length;i++)
	{
		printf("%d ",list.r[i]);
	}
	printf("\n");
	return ;
}
