#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct record
{
	char name[20];
	int roll;
	int mark;
};

int main()
{
	FILE *fp;
	int i,n;
	struct record student;
	fp=fopen("stu","wb");
	if(fp==NULL)
	{
		printf("Error:Open a File\n");
		exit(1);
	}
	printf("Enter number of record :");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter name :");
		scanf("%s",student.name);
		printf("Enter roll no :");
		scanf("%d",&student.roll);
		printf("Enter marks :");
		scanf("%d",&student.mark);
		fwrite(&student,sizeof(student),1,fp);
	}
	fclose(fp);
	return 0;
}

