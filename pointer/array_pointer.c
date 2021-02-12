#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p[3];

	int a=10, b=2, c=30;

	p[0]=&a, p[1]=&b, p[2]=&c;

	printf("a=%p b=%p c=%p ptr=%p\n",&a, &b, &c,p);
       for(int i=0;i<3;i++)
       {
	       printf("ptr[%d]=%p *ptr[%d]=%d\n",i,p[i],i,*p[i]);
       }
       return 0;
}


