#include"header.h"

void add_last(struct employee **ptr, struct employee **lptr)
{
	struct employee *nu=NULL;
	
	nu=calloc(1,sizeof(struct employee));

	if(nu==NULL)
	{
		printf("Error:Memory not allocate\n");
	//	exit(1);
	}
	printf("Enter the name:");
	//fflush(stdin);
	__fpurge(stdin);
	scanf("%[^\n]s",nu->name);
//	printf("%s\n",nu->name);
//	__fpurge(stdin);
	printf("Enter the age:");
	scanf("%d",&nu->age);
//	__fpurge(stdin);
	//printf("Enter the age:");
	//printf("%d\n",nu->age);
//	__fpurge(stdin);
	//printf("Enter the age:");
	printf("Enter the sal:");
	scanf(" %f",&nu->sal);
//	__fpurge(stdin);
//	printf("%f\n",nu->sal);

	if((*ptr)==NULL)
	{
		printf("abc\n");
		(*ptr)=nu;
		printf("abc\n");
	}
	else
	{
		printf("In else..\n");
		(*lptr)->next=nu;
	}
		nu->prev=(*lptr);
	
		(*lptr)=nu;
	}


		


