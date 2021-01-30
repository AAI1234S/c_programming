#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	FILE *fp;
	int ch;
	fp=fopen(argv[1],"r");

	if(fp==0)
	{
		printf("Error: Open a file");
		exit(1);
	}

	while(ch=(fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	
	fclose(fp);
	return 0;
}

