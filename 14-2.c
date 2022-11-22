#include<stdio.h>

struct student
{
	int id;
	char name[100];
	int accounts;
	int math;
	int eng;
	int hindi;
	int comp;
	int total;
	float per;
	char grade;
};

void main()
{
	FILE *f1;
	f1 = fopen("C:\\Users\\123\\Desktop\\stud.txt","a");
	
	int n;
	
	printf("Enter N : ");
	scanf("%d", &n);
	
	struct student s[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		system ("cls");
		printf("%d)\n", i+1);
		printf("Enter Name : ");
		scanf("%s", &s[i].name);
		printf("Enter Id : ");
		scanf("%d", &s[i].id);
		printf("Enter accounts Marks : ");
		scanf("%d", &s[i].accounts);
		printf("Enter Maths Marks : ");
		scanf("%d", &s[i].math);
		printf("Enter English Marks : ");
		scanf("%d", &s[i].eng);
		printf("Enter Hindi Marks : ");
		scanf("%d", &s[i].hindi);
		printf("Enter Computer Marks : ");
		scanf("%d", &s[i].comp);
		printf("Enter Percentage : ");
		scanf("%f", &s[i].per);
	}
	
	fprintf(f1,"Name\tId\tAccounts\tMaths\tEnglish\tHindi\tComp\tPer\n");	
	fprintf(f1,"------- ------- ------- ------- ------- ------- ------- -------\n");
	
	for(i=0; i<n; i++)
	{
		fprintf(f1,"%d\t%s\t%d\t%d\t%d\t%d\t%d\t%2.f\n", s[i].id, s[i].name, s[i].accounts, s[i].math, s[i].eng, s[i].hindi, s[i].comp, s[i].per);
	}
}
