#include<stdio.h>
#include<string.h>
struct person
{
	char name[30];
	int age;
};

void stuct_display(struct person stu)
{
	printf("Name:%s\n",stu.name);
	printf("Age:%d\n",stu.age);
}

struct person struct_modif(struct person stu)
{
	strcpy(stu.name,"Rakesk");
	stu.age=stu.age+10;
	return stu;
}

int main()
{
	struct person pr1={"shiv",23};
	struct person pr2={"Gawali",12};

	pr1=struct_modif(pr1);
	pr2=struct_modif(pr2);

	stuct_display(pr1);
	stuct_display(pr2);
	return 0;
}

