#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ip=0;  // not pointing to any memmory location

	int i=20;
	
	float *fp=0;
	float f=30;
//	fp=&i; both gives unpredictable result due to the memory occupation of both base type is differnt 
//	ip=&f;
	fp=&f;
	ip=&i;

	printf("&i=%p, ip=%p , i=%d , *ip=%d\n",&i, ip,i, *ip);
	printf("&f=%p, fp=%p,  f=%.2f, *fp=%.2f\n",&f, fp, f, *fp);
	return 0;
}


