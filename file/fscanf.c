#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Person
{
	char Fist_name[30];
	char last_name[30];
	int age;
};
int main()
{
	FILE *fp;
	struct Person pr;

	fp=fopen("fprintf_struct.txt","r");
	if(fp==NULL)
	{
		printf("Error:Open file");
		exit(1);
	}

	printf("Pesron Details:\n");
	while((fscanf(fp,"%s %s %d",pr.Fist_name, pr.last_name, &pr.age))!=EOF)
	{
		printf("Name:%s\nLast Name:%s\nAge:%d\n",pr.Fist_name,pr.last_name,pr.age);
	}
	fclose(fp);
	return 0;
}




