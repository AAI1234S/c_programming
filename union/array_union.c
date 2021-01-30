#include<stdio.h>
#include<string.h>

union Empl
{
	int age;
	char gen;
	double sal;
};

int main()
{
	union Empl obj1[5];

	for(int i=0;i<5;i++)
	{
		printf("Enter the age:");
		scanf("%d",&obj1[i].age);
		printf("Enter the gen:");
		scanf(" %c",&obj1[i].gen);
		printf("Enter the sal:");
		scanf("%lf",&obj1[i].sal);
	}

	for(int i=0;i<5;i++)
	{
		printf("Empl (%d): detail:\n",i+1);
		printf("Age=%d\nGen=%c\nsal=%.2f\n",obj1[i].age,obj1[i].gen,obj1[i].sal);
	}
	return 0;
}




