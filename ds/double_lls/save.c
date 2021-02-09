#include"header.h"
void save(struct employee *ptr)
{
	FILE *fptr;
	 fptr=fopen("data.txt","wb");

	 if(fptr==NULL)
	 {
		 printf("Error:File not open for write\n");
	 }
	 else
	 {
		 while(ptr)
		 {
			 fwrite(ptr,sizeof(struct employee)-(sizeof(struct employee *)+sizeof(struct employee *)),1,fptr);
			 ptr=ptr->next;
		 }
	 }
	 fclose(fptr);
}

