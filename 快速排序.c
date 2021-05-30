#include <stdio.h>

#define MAXSIZE 20
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

int Partition(SqList *L,int low,int high)
{
	int pivotkey;
	pivotkey = L->r[low];
	while(low<high)
	{
		while(low<high && L->r[high] >= pivotkey)
			high--;
		swap(L,low,high);
		while(low<high && L->r[low] <= pivotkey)
			low++;
		swap(L,low,high);
	}
}

void QSort(SqList *L,int low,int high)
{
	int pivot;
	if(low<high)
	{
		pivot = Partition(L,low,high);//把数列分开
		QSort(L,low,pivot-1);
		QSort(L,pivot+1,high);
	}
}

void QuickSort(SqList *L)
{
	QSort(L,1,L->length);
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
	QuickSort (&list);
	for(i = 1;i <= list.length;i++)
	{
		printf("%d ",list.r[i]);
	}
	printf("\n");
	return ;
}

