#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE *fptr;
	char str[100];
	fptr=fopen("fputs.txt","a");

	if(fptr==NULL)
	{
		printf("Error to open a file\n");
		exit(1);	
	}
	printf("Enter the string if comleted press ctrl+d:");

	while(gets(str)!=NULL)
	{
		fputs(str,fptr);
	}
	
	fclose(fptr);
	return 0;
}


