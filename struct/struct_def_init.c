#include<stdio.h>
#include<string.h>

int main()
{
	struct student
	{
		char name[30];
		unsigned int age;
		float height;
	};

	int i;
	struct student stu1={"RAJIV",20,5.2};
	struct student stu2,stu3,stu4;

	strcpy(stu2.name,"Ganesh");
	stu2.age=23;
	stu2.height=6.0;

	printf("Enter the student name , age, hight:");
	scanf("%s %d %f",stu3.name, &stu3.age, &stu3.height);

	stu4=stu3;

	printf("Student Details:\n");

	printf("Name: %s\nAge=%d\nHight=%.2f\n",stu1.name,stu1.age,stu1.height);
	printf("Name: %s\nAge=%d\nHight=%.2f\n",stu2.name,stu2.age,stu2.height);
	printf("Name: %s\nAge=%d\nHight=%.2f\n",stu3.name,stu3.age,stu3.height);

	return 0;
}

	
