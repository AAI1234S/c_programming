#include"header.h"

int main()
{
	struct employee *head=NULL, *tail=NULL;
	int choice=0;

	while(1)
	{
		puts("Enter your Choice:");
		puts("0.exit()");
		puts("1.add_last");
		puts("2.dispaly");
		puts("3.sync");
		puts("4.save");
		puts("5.Revesre_Dispaly");
		puts("6.delete_last");

		printf("Enter your choice[  ]\b\b\b");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: add_last(&head,&tail);
				break;
			case 2: display(head);
				break;
			case 3: sync(&head,&tail);
				break;
			case 4: save(head);
				break;

			case 5: reverse_display(tail);
				break;
			case 6: delete_last(&head, &tail);
				break;
			case 0: exit(0);
				break;
		}
	}

	return 0;
}

