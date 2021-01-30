#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1;
	int n=0;
	fp1=fopen("/home/sachin/Desktop/ppt_sachin_sanap.pdf","r"); 

	if(fp1==NULL)
	{
		printf("Error in opening File\n"); // if we try to open file r+or r mode and file not exit
		exit(1);
	}
	printf("Sucessfully open\n");
	//n=fclose(fp1);
	n=fcloseall();
	if(n==EOF)
		printf("Something error occur to close file\n");
	else
		printf("File close successfully\n");
	return 0;
}

