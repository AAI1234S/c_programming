#include<stdio.h>
#include<stdlib.h>
#define size 5
int main()
{
	int arr[size],i;

	printf("Enter the arr %d element\n",size);
	for(i=0;i<size;i++)
		scanf("%d",(arr+i));
	printf("sizeof arr=%lu\n byte",sizeof(arr));
	printf("Array are:\n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]= %2d\n",i,*(arr+i));
		printf("arr[%d]= %p\n",i,(arr+i));
	}

	return 0;
}




