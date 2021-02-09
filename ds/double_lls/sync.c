#include"header.h"
void sync(struct employee **ptr, struct employee **lptr)
{
	FILE *fptr;
	struct employee *nu=NULL, *temp=NULL, var;

	fptr=fopen("data.txt","rb");

	if(fptr==NULL)
	{
		printf("Error:Open a file read\n");
	}
	else
	{
		while(fread(&var,sizeof(struct employee)-(sizeof(struct employee *)+sizeof(struct employee *)),1,fptr)==1)
		{
			nu=(struct employee *)calloc(1,sizeof(struct employee));

			strcpy(nu->name,var.name);
			nu->age=var.age;
			nu->sal=var.sal;
			
			if(*ptr==NULL)
			{
				*ptr=nu;
			}
			else
			{
				(*lptr)->next=nu;
			}
			nu->prev=(*lptr);
			(*lptr)=nu;
		}
	}
	fclose(fptr);
}

