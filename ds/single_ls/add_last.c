#include"header.h"

struct company* add_last(struct company *ptr)
{
	struct company *nu=NULL, *temp=NULL;

nu=(struct company *)calloc(1,sizeof(struct company));

if(nu==NULL)
{
	printf("Error:Memory allocation failed\n");
	exit(1);
}
printf("Enter the company_name:");
fflush(stdin);
scanf("%s",nu->company_name);

printf("Enter Year of establish:");
scanf("%d",&nu->year_establish);

//printf("%d\n",nu->year_establish);

printf("Printf enter the company tunvover:");
scanf("%f",&nu->tunover);

if(ptr==NULL)
{
	ptr=nu;
	//printf("Company_Name:%s\nestablish:%d\ntunover:%f\n",ptr->company_name,ptr->year_establish,ptr->tunover);
	//return ptr;
}

else
{
	temp=ptr;
	while(temp->next)
	{
	temp=temp->next;
	}

	temp->next=nu;
	//printf("Company_Name:%s\nestablish:%d\ntunover:%f\n",ptr->company_name,ptr->year_establish,ptr->tunover);
//	return ptr;
}
	//printf("Company_Name:%s\nestablish:%d\ntunover:%f\n",ptr->company_name,ptr->year_establish,ptr->tunover);
return ptr;
}
