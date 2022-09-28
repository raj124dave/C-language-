#include<stdio.h>
#include<conio.h>
#define P printf
main()
{
	int a,b,c;

	clrscr();

	P("enter a :");
	scanf("%d",&a);

	P("enter b:");
	scanf("%d",&b);

	P("enter c:");
	scanf("%d",&c);

	if(a==b && b==c && c==a)
	{
		P("all are same ");

	}
	else if (a==b && a!=c)
	{
	   if(a>c)
	   {
		P(" a and b are big ");
	   }
	   else
	   {
		P(" c is big ");
	   }
	}
	else if (b==c && b!=a)
	{
	   if(b>c)
	   {
		P("b and c are big ");
	   }
	   else
	   {
		P(" a is big ");
	   }

	}
	else if (a==c && a!=b)
	{
	   if(a>b)
	   {
		P("a and c are big.. ");
	   }
	   else
	   {
		P(" b is big ");
	   }
	}
	if(a>b)
	{
	  if(a>c)
	  {
	     P("a is big");
	  }
	  else
	  {
	     P("b is big");
	  }

	}
	else
	{
	   if(b>c)
	   {
	     P("b is big");
	   }
	   else
	   {
	     P("c is big");
	   }
	}

	getch();

}

