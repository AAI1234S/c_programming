#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char *ptr=0;
	int     size;

	printf("Enter the string lenth:");
	scanf("%d",&size);

	ptr=(char*)malloc(size);   //without allocating the memory if we try to give ptr value casue segmentaion bug

	
	printf("Enter the sting:");
	scanf("%s",ptr);

	printf("U provide string:");
	puts(ptr);
/*
	int *iptr;

	printf("Enter the value:");
	scanf("%d",iptr);

	printf("%d\n",*iptr);

//Note: this comment program show without allocting memory using malloc,calloc,realloc trying to do assign value to *iptr it cau//sesegmentation falut(run time error. 
*/	

	return 0;
}

