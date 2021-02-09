#include"header.h"

void display(struct employee *ptr)
{
	if(ptr==NULL)
	{
		printf("Error:Dont have data to print");
		
	}

	while(ptr)
	{
		puts("-------------------------------------------------------------");
		printf("Employee Details:\nName:%s\nAge:%d\nsal:%.2f\n",ptr->name,ptr->age,ptr->sal);

		ptr=ptr->next;
		puts("-------------------------------------------------------------");
	}
}
