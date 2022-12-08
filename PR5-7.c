#include <stdio.h>
int main() 
{
  int i,j,r, c;
  	printf("Array A :\n");
  	printf("Enter the number of row : ");
	scanf("%d",&r);
	printf("Enter the number of column : ");
	scanf("%d",&c);
	
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter Value of Array a[%d][%d] : ", i,j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("\n-------------------------------------------\n\n");
  
  	for(i=0; i<r; i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n-------------------------------------------\n\n");

  int t[r][c];
  for (i = 0; i < r; ++i)
  {
  	for ( j = 0; j < c; ++j) 
  	{
   		 t[j][i] = a[i][j];
  	}
  }
  printf("\n-------------------------------------------\n");
  
  printf("\nTranspose of the matrix :\n\n");
  
  for (i = 0; i < c; ++i)
  {
  	for ( j = 0; j < r; ++j) 
	  {
    printf("%d  ", t[i][j]);
    if (j == r - 1)
	  
    printf("\n");
  	}
  }
}
