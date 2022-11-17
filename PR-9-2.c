#include<stdio.h>


union marks
{
	int roll_no;
	int name[100];
	int chem_marks;
	int maths_marks;
	int phy_marks;
	float pr;
};

main()
{
	int i,j;
	union marks a[5];
	for(i=0;i<5;i++)
	{
		system("cls");
		printf("student %d",i+1);
		
		printf("Enter roll no :");
		scanf("%d",&a[i].roll_no);
		printf("Enter his name: ");
		scanf("%s",&a[i].name);
		printf("Enter chemistry_marks :");
		scanf("%d",&a[i].chem_marks);
		
		printf("Enter maths marks :");
		scanf("%d",&a[i].maths_marks);	
		printf("Enter physics marks :");
	    scanf("%d",&a[i].phy_marks);
		
		j=a[i].chem_marks+a[i].maths_marks+a[i].phy_marks;
		
		a[i].pr=(j*100)/300;
			
		}
		
		system("cls");
		printf("\n------------------\n");
		
		for(i=0;i<5;i++)
		{
			printf("percentage of student %d is %0.2f\n",i+1,a[i].pr);
		}
		
			
}

