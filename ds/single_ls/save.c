#include"header.h"

void save(struct person *ptr)
{
	FILE *fp;

	if(ptr==NULL)
	{
		printf("No data to write in a file\n");
		exit(0);
	}

	fp=fopen("sll.txt","wb");   // file open sll.txt in w mode
	if(fp==NULL)
	{
		printf("Error:To allocating a memory\n");
		exit(1);
	}

	while(ptr)
	{	
		//printf("sizeof person=%ld\n",sizeof(struct person));
		//printf("size of *person=%ld\n",sizeof(struct person *));
		fwrite(ptr,(sizeof(struct person)-sizeof(struct person *)),1,fp);
		ptr=ptr->next;
	}
	fclose(fp);
}


