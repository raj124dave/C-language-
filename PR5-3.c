#include <stdio.h>

int main()
{
   int  freq[100];
   int size, i, j, count;
    
   printf("Enter size of Array A : ");
   scanf("%d", &size);
   
	int arr[size];    

   for(i=0; i<size; i++)
   {
   	printf("a[%d] =",i);
      scanf("%d", &arr[i]);
      freq[i] = -1;
   }

   for(i=0; i<size; i++)
   {
      count = 1;
      for(j=i+1; j<size; j++)
      {
    
         if(arr[i]==arr[j])
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
   
   for(i=0; i<size; i++)
   {
      if(freq[i] != 0)
      {
         printf("%d occurs %d times\n", arr[i], freq[i]);
      }
   }
}
