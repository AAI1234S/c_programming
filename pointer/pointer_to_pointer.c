#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=20;
	int *ptr=&a;
	int **ptr2=&ptr;
	int ***ptr3=&ptr2;
	int ****ptr4=&ptr3;

	printf("&a=%p  , a=%d\n ",&a,a);
	printf("ptr=%p, *ptr=%d\n",ptr,*ptr);
	printf("ptr2=%p, *ptr=%p **ptr2=%d\n",ptr2,*ptr2,**ptr2);
	printf("ptr3=%p, *ptr3=%p **ptr3=%p  ***ptr3=%d\n",ptr3,*ptr3,**ptr3,***ptr3);
	printf("ptr4=%p, *ptr4=%p **ptr4=%p  ***ptr=%p ****ptr=%d\n",ptr4,*ptr4,**ptr4, ***ptr4, ****ptr4);
	//note: pointer to pointer or level of pointer is 2 and as per ansi compiler at lest 12 level is necessary
	return 0;
}

