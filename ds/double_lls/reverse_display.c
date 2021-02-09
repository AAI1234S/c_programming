#include"header.h"
void reverse_display(struct employee *lptr)
{
	if(lptr==NULL)
	{
		printf("No data avilable to print\n");

	}
	else
	{
		while(lptr)
		{
			puts("_____________________________________________________________________");
			printf("Name:%s\nAge:%d\nSal:%.2f\n",lptr->name,lptr->age,lptr->sal);
			puts("_____________________________________________________________________");
			lptr=lptr->prev;
		}
	}
}


