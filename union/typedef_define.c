#include<stdio.h>
#define dp double *

int main()
{
	dp d1,d2,d3;
	typedef double* dptr1 ,dptr2, dptr3;

	printf("size d1=%ld, d2=%ld, d3=%ld\n",sizeof(d1),sizeof(d2),sizeof(d3));
	printf("size dptr1=%ld, dptr2=%ld, dptr3=%ld\n",sizeof(dptr1),sizeof(dptr2),sizeof(dptr3));
	printf("\n");
	return 0;
}

