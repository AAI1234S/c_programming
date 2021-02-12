#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=20,*iptr=&i;
	float f=20, *fptr=&f;
	char c='a', *cptr=&c;

	printf("&i=%p, iptr=%p\n",&i,iptr);
	printf("&f=%p, fptr=%p\n",&f,fptr);
	printf("&c=%p, cptr=%p\n",&c,cptr);
	printf("i=%d, *iptr=%d\n",i,*iptr);
	printf("f=%.2f, *fptr=%.2f\n",f,*fptr);
	printf("c=%c, *cptr=%c\n",c,*cptr);
	return 0;
}

