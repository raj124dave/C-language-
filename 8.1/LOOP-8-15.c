#include<stdio.h>
 
 main()
 
{
    int i,j;
    for (i=1;i<=5;i++)
    {
    	for(j=i;j>=1;j--)
    	{
    		if(j%2==0)
    		{
    			printf(" 0 ");
			}
			else if(j%2==1)
			{
			     	printf(" 1 ");
			}
		}
		
		printf("\n");
	}
}


/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
