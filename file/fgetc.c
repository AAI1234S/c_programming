#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	int ch;
	fp=fopen("fputc.txt", "r");

	if(fp==NULL)
	{
		printf("Error to open file");
		exit(1);
	}

		//printf("\"NAME\"");
		//printf("\n");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	printf("\n");
	return 0;
	
}

