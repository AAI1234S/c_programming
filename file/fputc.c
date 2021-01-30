#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("fgetc.txt","a");
	if(fp==NULL)
	{
		printf("Error created to file\n");
		exit(1);
	}
	printf("Enter the text and if completed to write press ctrl+d :\n");
	while((ch=getchar())!=EOF)
	{
		fputc(ch,fp);
	}

	fclose(fp);
	return 0;
}

