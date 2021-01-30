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
	FILE *fptr;
	struct Person pr1;
	char choice;

	fptr=fopen("fprintf_struct.txt","a");

	if(fptr==NULL)
	{
		printf("Error:open file\n");
	}

	do
	{
		printf("Enter the person detail:\n");
		printf("Enter First Name:\n");
		scanf("%s",pr1.Fist_name);
		printf("Enter Last Name:\n");
		scanf("%s",pr1.last_name);
		printf("Enter a Age:\n");
		scanf("%d",&pr1.age);
		fprintf(fptr,"First Name:%s\nLast Name:%s\nAge:%d\n",pr1.Fist_name,pr1.last_name,pr1.age);
		printf("Enter if you want Add more person deatil Press Y or Y else any char:");
		fflush(stdin);
		scanf(" %c",&choice);
	}while(choice=='y' || choice=='Y');

	printf("Data Write Succesfully\n");
	fclose(fptr);
	return 0;
}

	
	
	
