#include<stdio.h>
#include<conio.h>

main()
{
 int i,j;
 clrscr();

 for(i=1; i<=7; i++)
 {
   if(i==1)
    printf("*        *\n");
   else if(i==2)
    printf("  *    *\n");
   else if(i==3)
    printf("    * *\n");
   else
    printf("     *\n");

 }
 getch();
}