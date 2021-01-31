#include"header.h"

void display(struct person *ptr)
{
	struct person *temp=NULL;
	if(ptr==NULL)
	{
		printf("Sll is empty\n");
	}

	else
	{
		while(ptr)
		{
			printf("Name:%s\nAge:%d\n",ptr->name,ptr->age);

			ptr=ptr->next;
		}
	}
//	return 0;
}

		
