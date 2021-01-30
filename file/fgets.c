#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *fptr;
	char str[100];
	fptr=fopen("fputs.txt","r");

	if(fptr==NULL)
	{
		printf("File not open for read\n");
		exit(1);
	}
	
	while(fgets(str,80,fptr)!=NULL)
	{
		puts(str);
	}
	fclose(fptr);
	return 0;
}



