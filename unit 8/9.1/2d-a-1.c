#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int r,c,i,j,leg=0;
	
	p("Enter the array of raw\t\t:");
	s("%d",&r);
	p("Enter the array of :column\t:");
	s("%d",&c);
	int a[i][j];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		     p("Enter the a[%d][%d]",i,j);
		     s("%d",&a[i][j]);
		}
	}
	
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("2D array a[%d][%d]=[%d]\n",i,j,a[i][j]);
			leg++;
		}
		p("\n");
	}
	
			for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("%d ",a[i][j]);
		}
		p("\n");
	}
	p("2D array length : %d",leg);
	
}
