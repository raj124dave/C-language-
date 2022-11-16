
#include<stdio.h>

struct stud {
	int id;
	char name[50];
	int age;
	char course[20];
	char city[20];
	int std;
	char school[30]; 
};

void main()
{
	int i,n;
	
	printf("Enter the numbers of students : ");
	scanf("%d",&n);
	
	struct stud s[n];
	
	for(i=0;i<n;i++)
	{
		system("cls");
		
		printf("student: %d",i+1);
		printf("Enter the student id: ");
		scanf("%d",&s[i].id);
		printf("Enter the student name: ");
		scanf("%s",&s[i].name);
		printf("Enter the student age: ");
		scanf("%d",&s[i].age);
		printf("Enter the student course: ");
		scanf("%s",&s[i].course);
		printf("Enter the student city: ");
		scanf("%d",&s[i].city);
		printf("Enter the student std: ");
		scanf("%s",&s[i].std);
		printf("Enter the student school: ");
		scanf("%s",&s[i].school);
	}
	system("cls");
	printf("id\tname\tage\tcourse\tcity\tstd\tschool");
	
	for(i=0;i<n;i++);
	printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\n",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].std,s[i].school);
}
		


