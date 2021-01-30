#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	int age;
	char name[30];
	char str[100];

	fp=fopen("fprintf.txt","w");
	if(fp==NULL)
	{
		printf("Error:Open a file\n");
		exit(1);
	}

	printf("Enter the full Name:");
	scanf("%[^\n]s",str);
	printf("Enter the Age:");
	scanf("%d",&age);

	fprintf(fp,"Name:%s\nAge:%d\n",str,age);
	printf("fprintf(Write the data in a file:\n");
	fclose(fp);
	return 0;
}

