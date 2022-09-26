#include<stdio.h>
#include<conio.h>

main()
{
 int b_s;
 float hra , da , ta , gross_s;
 clrscr();
 printf("enter base salary =");
 scanf("%d",&b_s);
 hra = ((b_s*10)/100);
 da = ((b_s*5)/100);
 ta = ((b_s*8)/100);
 printf("HRA = %.2f\nDA = %.2f\nTA = %.2f",hra,da,ta);
 gross_s = b_s + hra + da + ta;
 printf("\ngross salary = %.2f",gross_s);
 getch();
}