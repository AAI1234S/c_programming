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
			printf("Company_name:%s\nYear_establish:%d\nTunover:%.2f\n",ptr->company_name,ptr->year_establish,ptr->tunover);
			printf("--------------------------------------------------------------------------------\n");
			ptr=ptr->next;
		}
	}
}

