#include<stdio.h>
#include<stdlib.h>

struct Person
{
	unsigned short int age;
	char First_name[30];
	char Last_Name[30];
	float sal;
	unsigned long int Mob_Num;
	//struct Person *ptr;

};

int main()
{
	struct Person obj1;

	printf("Enter the persone First_Name:");
	scanf("%s",obj1.First_name);

	printf("Enter the persone Last_Name:");
	scanf("%s",obj1.Last_Name);

	printf("Enter the person age:");
	scanf("%hd",&obj1.age);

	printf("Enter the person Mob_No:");
	scanf("%ld",&obj1.Mob_Num);

	printf("__________________________________________________________\n");

	printf("Person Information:\n");
	printf("First_Name:%s\n",obj1.First_name);
	printf("Last_Name:%s\n",obj1.Last_Name);
	printf("Age :%hd\n",obj1.age);
	printf("Mob_Num:%ld\n",obj1.Mob_Num);
	printf("done");
	return 0;
}


