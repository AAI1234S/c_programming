#include"header.h"

struct company* sync_data(struct company *ptr)
{
	struct company var, *nu=NULL, *temp=NULL;
	FILE *fp;

	fp=fopen("data.txt","rb");

	if(fp==NULL)
	{
		return ptr;
	}
	else
	{
		while(fread(&var, (sizeof(struct company)-sizeof(struct company *)),1,fp)==1)
		{
			nu=(struct company*) calloc(1,sizeof(struct company));

			if(nu==NULL)
			{
				printf("Memory allocation failed\n");
				return ptr;
			}

			strcpy(nu->company_name, var.company_name);

			nu->year_establish=var.year_establish;
			nu->tunover=var.tunover;

//			printf("save data:%s\t %d\t %.2f\n",nu->company_name,nu->year_establish,nu->tunover);

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



