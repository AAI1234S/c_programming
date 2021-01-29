#include<stdio.h>
#include<string.h>
struct Person
{
	char name[30];
	char Gender;
	int age;
};

int main()
{
	struct Person arr[10];
	int i=0;

	for(i=0;i<10;i++)
	{
		printf("Enter the Person Name,Gender(M Or F),age:");
		scanf("%s %c %d",arr[i].name,&arr[i].Gender,&arr[i].age);
	}
	
	for(i=0;i<10;i++)
	{
		printf("Person Name:%s\n",arr[i].name);
		printf("Gender:%c\n",arr[i].Gender);
		printf("Age:%d\n",arr[i].age);
	}
	printf("\n");
	return 0;
}

