#include<stdio.h>

void main()
{
	int n;
	
	printf("enter the any number: ");
	
	scanf("%d",&n);
	
	int *p1 = &n;
	
	printf(" square of your enter number : %d ",*p1 * *p1);
	
}
