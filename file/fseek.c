#include<stdio.h>
struct record
{
	char name[20];
	int roll;
	int mark;
}student;

int main()
{
	int n;
	FILE *fp;
	fp=fopen("stu","rb");
	if(fp==NULL)
	{
		printf("Error:open\n");
	}

	printf("Enter the record number to be read:");
	scanf("%d",&n);
	fseek(fp,(n-1)*sizeof(student),0);
	fread(&student,sizeof(student),1,fp);
	printf("%s\t",student.name);
	printf("%d\t",student.roll);
	printf("%d\n",student.mark);

	fclose(fp);
	return 0;
}

