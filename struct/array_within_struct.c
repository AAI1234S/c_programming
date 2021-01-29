#include<stdio.h>
#include<string.h>

struct student
{
	char name[30];
	int rollnum;
	int mark[4];
};

int main()
{
	struct student arr[3];
	int i,j;

	for(i=0;i<3;i++)
	{
		printf("Enter the Student %d Detail:\n",i+1);
		printf("Enter the Name:");
		scanf("%s",arr[i].name);
		printf("Enter the RollNum:");
		scanf("%d",&arr[i].rollnum);
		for(j=0;j<3;j++)
		{
			printf("Enter the (%d) subject Mark:\n",j+1);
			scanf("%d",&arr[i].mark[j]);
		}
		printf("__________________________________________________\n");
	}

	for(i=0;i<3;i++)
	{
		printf("Studen %d Detail:\n",i+1);
		printf("Name:%s\n",arr[i].name);
		printf("RollNum:%d\n",arr[i].rollnum);

		for(j=0;j<3;j++)
		{
			printf(" %d Sub Mark=%d\n",j+1,arr[j].mark[j]);
		}
		printf("-----------------------------------------------------\n");
	}

	return 0;
}



