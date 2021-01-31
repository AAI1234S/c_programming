#include"header.h"

struct person* sync_file(struct person *ptr)
{
	struct person var, *nu=NULL, *temp=NULL;

	FILE *fp;
	fp=fopen("sll.txt","rb");

	if(fp==NULL)
	{
		printf("Error:to pen a file\n");
	}

	else
	{
		while(fread(&var,(sizeof(struct person)-sizeof(struct person *)),1,fp)==1)
		{
			nu=calloc(1,sizeof(struct person));

			if(nu==NULL)
			{
				printf("Memory allocation failed\n");
				return ptr;

			}
			strcpy(nu->name, var.name);
			nu->age=var.age;
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
		}
	}
	fclose(fp);
	return ptr;
}







