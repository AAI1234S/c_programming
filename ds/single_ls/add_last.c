#include"header.h"

struct person* add_last(struct person *ptr)
{
	struct person *nu=NULL, *temp=NULL;
	
	nu=calloc(1,sizeof(struct person));

	if(nu==NULL)
	{
		printf("Error:Memory allocation failed:\n");
		exit(1);
	}

	printf("Enter the person Name:");
	scanf("%s",nu->name);

	printf("Enter the age:");
	scanf("%d",&nu->age);

	if(ptr==NULL)
	{
		ptr=nu;
	}

	else
	{
		temp=ptr;

		while(temp->next)
		{
			temp=temp->next;
		}
		temp->next=nu;
	}
	return ptr;
}


