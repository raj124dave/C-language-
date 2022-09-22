#include<stdio.h>
#include<conio.h>
main()
{       int x,y,ans;
	clrscr();
	printf("enter a value of a = ");
	scanf("%d",&x);
	printf("enter a value of b = ");
	scanf("%d", &y);

	ans = (x * x) + (2 * x * y) + (y * y);

	printf("Answer = %d", ans );

	getch();
}
