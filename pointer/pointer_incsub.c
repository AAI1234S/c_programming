#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *iptr;
	char *cptr;
	float *fptr;
	double *dptr;

	printf("iptr=%u\n",iptr);
	iptr++;
	printf("iptr++=%u\n",iptr);
	iptr=iptr-3;
	printf("iptr-3=%u\n",iptr);
	iptr=iptr+5;
	printf("iptr+5=%u\n",iptr);
	iptr--;
	printf("iptr--=%u\n",iptr);
	printf("cptr=%u\n",cptr);
	cptr++;
	printf("cptr++=%u\n",cptr);
	cptr=cptr-3;
	printf("cptr-3=%u\n",cptr);
	cptr=cptr+5;
	printf("cptr+5=%u\n",cptr);
	cptr--;
	printf("cptr--=%u\n",cptr);
	printf("fptr=%p\n",fptr);
	fptr++;
	printf("fptr++=%p\n",fptr);
	fptr=fptr-3;
	printf("fptr-3=%p\n",fptr);
	fptr=fptr+5;
	printf("fptr+5=%p\n",fptr);
	fptr--;
	printf("fptr--=%p\n",fptr);
	printf("dptr=%u\n",dptr);
	dptr++;
	printf("dptr++=%u\n",dptr);
	dptr=dptr-3;
	printf("dptr-3=%u\n",dptr);
	dptr=dptr+5;
	printf("dptr+5=%u\n",dptr);
	dptr--;
	printf("dptr--=%u\n",dptr);
	return 0;
}


