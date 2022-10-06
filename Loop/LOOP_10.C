#include<stdio.h>
#include<conio.h>
#define P printf
main()
{
	int i,n;
	clrscr();

	P("enter the number:");
	scanf("%d",&n);

	for(i=1;i<=10;i++)
	{
		P("%d*%d=%d\n",n,n,n*i);
	}
	getch();

}