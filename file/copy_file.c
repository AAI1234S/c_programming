#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE *fsource,*fdest;
	int ch;
	fsource=fopen("fputc.txt","r");
	if(fsource==NULL)
	{
		printf("Source:Error in openning file\n");
		exit(1);
	}
	fdest=fopen("fgets_dest.txt","w");
	if(fdest==NULL)
	{
		printf("Dest:Error in oenning file\n");
		exit(1);
	}

	while((ch=fgetc(fsource))!=EOF)
	{
		fputc(ch,fdest);

	}

	printf("Data Copy copmlete\n");

	fcloseall();
	return 0;
}

