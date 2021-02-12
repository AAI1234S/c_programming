#include<stdio.h>
#include<stdlib.h>

int* fun(int *a, int num);

int main()
{
	int num=4;
	int arr[3]={12,14,16};
	int *ptr;

	ptr=fun(&arr,num);

	
	printf("arr=%p, value of prt=%p, value of *ptr=%d\n",arr,ptr,*ptr);
	printf("\n");
	return 0;
}

int* fun(int *a,int num)
{
	int i=0,*ptr=0;
	a=a+num;
	return a;
}


