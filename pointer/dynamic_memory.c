#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,new_size;
	float *fptr;

	printf("Enter the size of array:\n");
	scanf("%d",&size);

	fptr=(float*)calloc(sizeof(float),size);

	printf("Enter the %d element \n",size);
	for(int i=0;i<size;i++)
		scanf("%f",&fptr[i]);

	printf("All element are:\n");
	for(int i=0;i<size;i++)
		printf("%.2f  ",fptr[i]);
	printf("\n");

	printf("Enter the how many element u add more:");
	scanf("%d",&new_size);
	fptr=(float *)realloc(fptr,size+new_size*sizeof(float));
	printf("Enter the %d more element\n",new_size);
	for(int i=size;i<new_size+size;i++)
		scanf("%f",&fptr[i]);

	printf("after add element:\n");
	for(int i=0;i<size+new_size;i++)
		printf("%.2f ",fptr[i]);
	printf("\n");

	free(fptr);
	fptr=NULL;

	return 0;
}

