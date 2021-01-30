#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee
{
	char name;
	int age;
	float sal;
};

int main()
{
	FILE *fp;
	struct employee emp;
	int num,i;

	fp=fopen("fwrite.txt","rb");
	if(fp==NULL)
	{
		printf("Error:Open File");
		exit(1);
	}
	printf("fp=%p\n",fp);
/*
	printf("Enter the How many empoyee info write:");
	scanf(" %d",&num);

	for(i=0;i<num;i++)
	{
		printf("Enter The Emp %d Detail:\nName:\n",i+1);
		scanf("%s",&emp.name);
		printf("Age:\n");
		scanf("%d",&emp.age);
		printf("Sal:\n");
		scanf("%f",&emp.sal);
		fwrite(&emp,sizeof(emp),1,fp);
	}*/

	printf("Name\t age\t sal\n:");
	while(fread(&emp,sizeof(emp),1,fp)==1)
	{
		printf("%d\n",emp.name);
		printf("%d\n",emp.age);
		printf("%.2f\n",emp.sal);
	}


	fclose(fp);
	return 0;
}

