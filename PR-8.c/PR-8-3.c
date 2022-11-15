#include<stdio.h>

void main(){
	
	int a[100],i,n;
	int *p1;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	p1=a;
	
	for(i=0; i<n; i++){
		printf("Enter element : ");
		scanf("%d",&(*p1));
		p1++;
	}
	

	
	p1=&a[n-1];
	
	
	
	for(i=0; i<n; i++){
		printf("%d ",*p1);
		p1--;
	}
	
}
