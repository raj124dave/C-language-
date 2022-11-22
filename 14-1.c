#include<stdio.h>
void main()
{
	FILE *fp, *f2;
	
	char name[100];
	
	fp = fopen("C:\\Users\\123\\Desktop\\hello.txt","r");
	f2 = fopen("C:\\Users\\123\\Desktop\\hello2.txt","a");
	
	fscanf(fp,"%s",&name);

	printf("name in sale of file : %s",name);
		
	printf(f2,"%s",name);	
	
	fclose(fp);
	fclose(f2);
}
