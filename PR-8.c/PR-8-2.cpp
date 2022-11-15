#include<stdio.h>

int main()
{
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	
	int a[n],i;
	int *p1 = &a;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] : ",i);
		scanf("%d",&*(p1+i));
	}
	printf("\n-------------------------------\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] : %d\n",i,*(p1+i));
	}
}
