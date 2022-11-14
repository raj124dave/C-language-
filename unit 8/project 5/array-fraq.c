#include<stdio.h>
#define p printf
#define s scanf

main()
{
    int n,count;
    
    printf("enter the legth:");
    s("%d",&n);
    int a[n],freq[n],i,j;
    
    for(i=0;i<n;i++)
    {
       printf("Enter the elements of a[%d]:",i);
       s("%d",&a[i]);
      freq[i]= -1;
	 }
	 
	     for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        
                if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", a[i], freq[i]);
        }
    }
        
	   	
}
