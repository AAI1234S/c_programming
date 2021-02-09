#include"header.h"
void delete_last(struct employee **ptr, struct employee **lptr)
{
	struct employee *temp=NULL;

	if(*ptr==NULL)
	{
		printf("Double link list are empty\n");
	}
	else
	{
		temp=(*lptr);

	/*if(*lptr==*ptr)
		{
			free(*lptr);
			free(*ptr);
			*lptr=NULL;
			*ptr=NULL;
		}*/

		(*lptr)=(*lptr)->prev;
		if(*lptr)
		{
			(*lptr)->next=NULL;
		}
		else
		{
			(*ptr)=NULL;
		}

		free(temp);
		temp=NULL;
	}
}


