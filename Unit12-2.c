
#include<stdio.h>

struct emp {
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
	
	printf("Enter the numbers of employe : ");
	scanf("%d",&n);
	
	struct emp s[n];
	
	for(i=0;i<n;i++)
	{
		system("cls");
		
		printf("student: %d",i+1);
		printf("Enter the employe id: ");
		scanf("%d",&s[i].id);
		printf("Enter the employe name: ");
		scanf("%s",&s[i].name);
		printf("Enter the employe age: ");
		scanf("%d",&s[i].age);
		printf("Enter the employe role: ");
		scanf("%s",&s[i].course);
		printf("Enter the employe city: ");
		scanf("%d",&s[i].city);
		printf("Enter the employe exp: ");
		scanf("%s",&s[i].std);
		printf("Enter the employe company-name: ");
		scanf("%s",&s[i].school);
	}
	system("cls");
	printf("id\tname\tage\trole\tcity\texp\tscom-name\n\n");
	
	for(i=0;i<n;i++);
	printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\n",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].std,s[i].school);
}
