#include"header.h"
void display(struct company *ptr)
{
	if(ptr==NULL)
	{
		printf("NO data available to show: sll is empty\n");
	}
	else
	{
		while(ptr)
		{
			printf("--------------------------------------------------------------------------------\n");
			printf("Company_name:%s\n",ptr->company_name);
			printf("Year_establish:%d\n",ptr->year_establish);
			printf("Tunover:%f\n",ptr->tunover);
			printf("--------------------------------------------------------------------------------\n");
			ptr=ptr->next;
		}
	}
}

