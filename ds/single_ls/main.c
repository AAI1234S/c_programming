#include"header.h"

int main()
{
	struct person *head=NULL;
	int choice;

	while(1)
	{
		puts("1.add_last");
		puts("2.display");
		puts("3.save");
		puts("4.sync_file");
		puts("0.exit");
		printf(" Add Your choice:");
		scanf("%d",&choice);

	switch(choice)
	{
		case 1: head=add_last(head);
			break;

		case 2:display(head);
		       break;

		case 3:save(head);
		       break;

		case 4:head=sync_file(head);
		       break;

		case 0: exit(0);
			break;
	}
	}
return 0;
}
