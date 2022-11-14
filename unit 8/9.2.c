#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int r,c,i,j,sum=0,ave;
	
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
		
		    sum=sum+a[i][j];
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
	p("\n");
    ave=sum/i;
	p("2D array averang:%d",ave);
	
}
