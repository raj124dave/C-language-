#include<stdio.h>
#include<string.h>

void main()

{
	
	char str[100],i;
	char *ptr;
	int c=0;
	
	printf("Enter String : ");
	gets(str);
	
	ptr=&str;
	
	for(i=0; i<strlen(str); i++){
		c++;
		ptr++;
	}
	
	printf("String length : %d",c);
}

