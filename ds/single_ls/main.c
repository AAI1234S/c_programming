#include"header.h"

int main()
{
	struct company *head=NULL, *temp=NULL;
	int choice;
	char str[30];

	while(1)
	{
		
		puts("1.add_last");
		puts("2.save");
		puts("3.sync_data");
		puts("4.display");
		puts("5.search");
		puts("0.exit()");

		printf("Enter the choice[  ]\b\b\b");
		scanf(" %d",&choice);

	switch(choice)
	{
		case 1:head=add_last(head);
		//	printf("%s %d %.2f\n",head->company_name, head->year_establish, head->tunover);
		       break;

		 case 2:save(head);
			break;

		 case 3:head=sync_data(head);
			break;

		 case 4:display(head);
			break;
		case 5:
			printf("Enter the company_name to search:");
			scanf("%s",str);
			head=search(head,str);
			break;

		case 0:exit(0);
		       break;
	}
	}
	return 0;
}



