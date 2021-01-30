#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct record
{
	char name[20];
	int roll;
	int mark;
}student;
int main()
{
	FILE *fp;
	fp=fopen("stu","rb");
	if(fp==NULL)
	{
		printf("Error:Open a file\n");
		exit(1);
	}
	printf("\nName:\tRollnum:\tMarks:\n");
	while(fread(&student,sizeof(student),1,fp)==1)
	{
		printf("%s\t",student.name);
		printf("%d\t",student.roll);
		printf("%d\n",student.mark);
	}
	fclose(fp);
	return 0;
}

