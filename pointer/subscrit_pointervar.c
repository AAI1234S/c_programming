#include<stdlib.h>
#include<stdio.h>

int main()
{
	int arr[]={10,20,30,40,50};
	int *ptr=arr; //or *ptr=&arr[0]
	int num=5;

//	arr=&num;
//	arr++;
//	arr=arr-1; this all think not allowed with arr
/*
	ptr=&num;
	printf("ptr=%3d\n",*ptr);
	ptr++;
	
	printf("ptr=%3d\n",*ptr);
	ptr=ptr-1;

	printf("ptr=%3d\n",*ptr);

	 *ptr=arr; //or *ptr=&arr[0] */
	printf("array:\n");
	for(int i=0;i<5;i++)
	{
		printf("arr[%d] (arr+i)=%p &arr[i]=%p  (i+arr)=%p  (p+i)=%p &p[i]=%p\n",i, (arr+i),&arr[i], (i+arr),(ptr+i), &ptr[i]);
		printf("arr[%d] *(arr+i)=%d arr[i]=%d  *(i+arr)=%d  *(p+i)=%d p[i]=%d\n",i, *(arr+i),arr[i], *(i+arr),*(ptr+i), ptr[i]);
	}
	return 0;
}

	
