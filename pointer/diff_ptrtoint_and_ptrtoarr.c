#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p;
	int (*ptr)[5];
	int arr[5]={1,2,3,4,5};
	
	p=arr;
	ptr=&arr;
/*
	printf("p=%u  ptr=%u\n",p,ptr);
	p++;
	ptr++;
	printf("p=%u ptr=%u\n",p,ptr);*/

	printf("p=%u, ptr=%u\n",p,ptr);
	printf("*p=%d,*ptr=%u\n",*p,*ptr);
	printf("sizeof p=%lu sizeof ptr=%lu\n",sizeof(p),sizeof(ptr));
	printf("sizeof *p=%lu sizeof *ptr=%lu\n",sizeof(*p),sizeof(*ptr));
	return 0;
}


