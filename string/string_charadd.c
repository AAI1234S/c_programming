#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size,i=0;
       	char *pstr=NULL;

	printf("Enter the size of string:");
	scanf("%d",&size);
	
	pstr=(char *)malloc(size);
	
	//char str[size];

	printf("Enter the string:");
	__fpurge(stdin);
	scanf("%[^\n]s",pstr);

	for(i=0; pstr[i]!='\0';i++)
	{
		printf("character %3c=",pstr[i]);
		printf("%p\n",&pstr[i]);
		
	}

	printf("%s   %s",pstr,"RAM MANGESH SANAP");
	printf("\n");
	return 0;
}


	
	
