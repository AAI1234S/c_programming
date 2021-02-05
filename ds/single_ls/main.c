#include"header.h"

int main()
{
	struct company *head=NULL;
	int choice;

	while(1)
	{
		
		puts("1.add_last");
		puts("2.save");
		puts("3.sync_data");
		puts("4.display");
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
			printf("%s %d %.2f\n",head->company_name, head->year_establish, head->tunover);
			break;

		 case 4:display(head);
			break;

		case 0:exit(0);
		       break;
	}
	}
	return 0;
}



