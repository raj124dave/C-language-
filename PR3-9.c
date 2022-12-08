#include<stdio.h>

main()

{
	int n,t,r=0,digit,sum=0,mul=1;
	
	printf("Enter A Number : ");
	scanf("%d", &n);
	
	t=n;
	while(t>0)
	{
		mul = mul* (t%10);
		sum = sum + (t%10);
		t = t/10;
	}
	
	if(mul == sum)
	{
		printf("\n%d is a magic number.",n);
	}
	
	else
	{
		printf("\n%d is not a magic number",n);
	}
}
