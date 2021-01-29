#include<stdio.h>
#include<string.h>

int main(void)
{
	char name[20];
	int age;
	float sal;
	char str[30]="sachin 28 45000";
	sscanf(str,"%s %d %f",name,&age,&sal);

	printf("Name:%s\n",name);
	printf("Age:%d\n",age);
	printf("sal=%.2f\n",sal);
	return 0;
}

