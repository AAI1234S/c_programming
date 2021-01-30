#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int i=0;

	if(argc !=5)
	{
		printf("Enter ./a.out and 4 arg\n");
		exit(1);
	}

	for(i=0;i<5;i++)
	{
		printf("argv[ %d ] = %s\n",i,argv[i]);
	}

	return 0;
}

