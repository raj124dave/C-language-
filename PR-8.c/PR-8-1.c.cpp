#include<stdio.h>

int main()
{
	int a,b;
	 printf("enter a:");
	 scanf("%d",&a);
	 
	 printf("enter b:");
	 scanf("%d",&b);
	 
	 int *p1 = &a;
	 int *p2 = &b;
	 
	 *p1 = *p1 + *p2;
	 *p2 = *p1 - *p2;
	 *p1 = *p1 - *p2;
	 
	 printf("a : %d\nb : %d",*p1,*p2);
	 
	 return (0);
	 
}
