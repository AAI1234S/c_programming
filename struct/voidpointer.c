#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	void *ptr;    //if we do like this then void pointer will consider the pointer assine value as a address 

	int a=10;
	float b=30;
	char c='t';

	printf("void ptr=%p\n",ptr);
	printf("sizeof void ptr=%lu\n",sizeof(ptr));
	//printf("*ptr=%d\n",*ptr);
	
	ptr=&a; 
	/*ptr=a;   //this will consider as a address
	printf("a=%d\n", *ptr); //gives error to invalied used of *ptr */

	printf("a=%d\n",*(int*)ptr);
	//ptr=b  //error due to float never a address
	ptr=&b;
	printf("b=%f\n",*(float*)ptr);

	ptr=&c; 
	printf("c=%c\n",*(char*)ptr);

	return 0;

}

