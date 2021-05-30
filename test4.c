#include <stdio.h>

typedef struct{
	int hour;
	float min;
	double sec;
}TIME,*PTIME;

void main()
{
	PTIME p = NULL;
	TIME x;
	x.hour = 100;
	p = &x;
	printf("%d",p->hour);
}
