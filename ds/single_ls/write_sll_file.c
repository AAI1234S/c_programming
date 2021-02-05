#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data* enter_data(struct data *ptr);
void display(struct data *ptr);
void save(struct data *ptr);
struct data* sync(struct data *ptr);
struct data
{
	int age;
	struct data *next;
};

int main()
{
	struct data *temp=NULL, *head=NULL;
	int choice=0, i=0;
	while(1)
	{
		printf("1.enter_data\n2.Display\n3.Save\n4.Sync\n0.exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: head=enter_data(head);
				break;
			case 2: display(head);
				break;
			case 3: save(head);
				break;
			case 4: head=sync(head);
				break;
			case 0: exit(0);
				break;
		}
	}
	return 0;
}
struct data* enter_data(struct data *ptr)
{
	struct data *nu=NULL, *temp=NULL;

	nu=(struct data *)calloc(1,sizeof(struct data));
	if(nu==NULL)
	{
		printf("Error:not allocate memory\n");
		exit(1);
	}

	printf("Enter the age:");
	scanf("%d",&nu->age);

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
	return ptr;
}

void display(struct data *ptr)
{
	if(ptr==NULL)
	{
		printf("Error:data not available\n");
		
	}
	else
	{
		while(ptr)
		{
			printf("Age:%d\n",ptr->age);
		ptr=ptr->next;
		}
	}
}

void save(struct data *ptr)
{
	FILE *fptr;
	fptr=fopen("data1.txt","wb");
	if(fptr==NULL)
	{
		printf("Error:file not open\n");
		exit(1);
	}
	else
	{
	while(ptr)
	{
		fwrite(ptr,(sizeof(struct data)-sizeof(struct data *)),1,fptr);

		ptr=ptr->next;
	}
	}
	fclose(fptr);
}

struct data* sync(struct data *ptr)
{
	struct data var,*nu=NULL, *temp=NULL;
	FILE *fptr;
	fptr=fopen("data1.txt","rb");

	if(fptr==NULL)
	{
		printf("Error:opening a file\n");
		exit(1);
	}
	else
	{
	while(fread(&var,(sizeof(struct data)-sizeof(struct data *)),1,fptr)==1)
	{
		nu=(struct data*)calloc(1,sizeof(struct data));

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
	return ptr;
	fclose(fptr);
}

