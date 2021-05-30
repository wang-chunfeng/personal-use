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

void Merge(int SR[],int TR[],int i,int m,int n)
{
	int j,k,l;
	for(j = m+1,k = i;i<=m && j<=n;k++)
	{
		if(SR[i]<SR[j])
			TR[k] = SR[i++];
		else
			TR[k] = SR[j++];
	}
	if(i <= m)
	{	
		for(l = 0;l <= m-i;l++)
		{
			TR[k+l] = SR[i+l];
		}  
	}
	if(j <= n)
	{
		for(l = 0;l <= n-j;l++)
		{
			TR[k+l] = SR[j+l];
		}
	}
}

void MSort(int SR[],int TR1[],int s,int t)
{
	int m;
	int TR2[MAXSIZE];
	if(s == t)
	{
		TR1[s] = SR[s];
	}
	else
	{
		m = (s+t)/2;
		MSort(SR,TR2,s,m);
		MSort(SR,TR2,m+1,t);
		Merge(TR2,TR1,s,m,t);		
	}
}	

void MergeSort(SqList *L)
{
	MSort(L->r,L->r,1,L->length);
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
	MergeSort(&list);
	for(i = 1;i <= list.length;i++)
	{
		printf("%d ",list.r[i]);
	}
	printf("\n");
	return ;
}




