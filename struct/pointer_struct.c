#include<stdio.h>
#include<string.h>

struct pointer
{
	int name;
	float age;
};
int main()
{
	struct pointer obj1={"ravi",23.56};
	struct pointer *ptr=&obj1;
	//r=&obj1;
/*	ptr=(struct ponter *)malloc(sizeof(struct pointer));
	ptr=&obj1;

	printf("Enter Name:\n");
	scanf("%s",&ptr->name);

	printf("Enter Age:\n");
	scanf("%f",&ptr->age);
*/
	__fpurge(stdin);
	printf("(*ptr) Name:\n",(*ptr).name);
	printf("Age:\n",(*ptr).age);

	printf("Name:\n",ptr->name);
	printf("Age:\n",ptr->age);
	return 0;
}

