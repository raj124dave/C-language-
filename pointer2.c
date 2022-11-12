#include<stdio.h>

void main()
{
	int a,b;
	printf("enter any number : ");
	scanf("%d",&a);
	
	printf("enter any number : ");
	scanf("%d",&b);
	
	int *p1 = &a;
	int *p2 = &b;
	
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
	
	printf("\n------------------\n");
	printf("a : %d\nb : %d",*p1,*p2);
}
