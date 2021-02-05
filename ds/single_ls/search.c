#include"header.h"
struct company* search(struct company *ptr, char *str)
{
	if(ptr==NULL)
	{
		printf("Error:Data not available to search\n");
		return ptr;
	}
	else
	{
		while(ptr && strcmp(ptr->company_name,str)!=0)
		{
			ptr=ptr->next;
		}
		if(ptr==NULL)
		{
			return ptr;
		}
		else
		{
			return ptr;
		}
	}
}
