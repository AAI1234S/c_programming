#include"header.h"
void save(struct company *ptr)
{
	FILE *fptr=NULL;

	fptr=fopen("data.txt","wb");

	if(fptr==NULL)
	{
		printf("Error:Open a file\n");
	}

	while(ptr)
	{
		fwrite(&ptr,(sizeof(struct company)-sizeof(struct company *)),1,fptr);
		printf("Save.c: %s\t %d %.2f\n",ptr->company_name,ptr->year_establish,ptr->tunover);
		ptr=ptr->next;
	}

	fclose(fptr);
}

