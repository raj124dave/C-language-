#include<stdio.h>
#include<conio.h>
main()
{
    int i=1, n, sum= 0;
    clrscr();
       printf("ending point: ");
       scanf("%d",&n);
       while(i<=n)
       {
	printf("%d ",i++);
	sum+=i;
       }
       printf("sum=%d ",sum);
      getch();

}