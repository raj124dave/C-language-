#include<stdio.h>
 
 main()
 
{
    int i,j;
    for (i=5;i>=1;i--)
    {
    	for(j=i;j<=5;j++)
    	{
    		printf("%d",j);
		}
		
		printf("\n");
	}
}



/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
