#include<stdio.h>
main()
{
   int i,j,b,n,counter,ave;
   
   printf ("Enter The Size Of Array A :");
   scanf ("%d", &n);
   
   int a[n];
   
   for (i=0; i<n; i++)
   {
   	printf ("Enter The Elements :");
   	scanf ("%d",&a[i]);
	}
	
   for (i=0; i<n; i++)
   {
      for (j=i+1; j<n; j++)
	  {
         if (a[i] < a[j])
		 {
            b = a[i];
            a[i] = a[j];
            a[j] = b;
         }
      }
   }
   
   printf ("The numbers arranged in descending order are given below\n");
   
   for (i=0; i<n; ++i)
   {
      printf ("%d\n",a[i]);
  
	}
	
	printf ("The 2nd largest number is = %d\n", a[1]);
	 
}
