#include<stdio.h>
#include<stdlib.h>
#define size 5

int main()
{
	int size;
	int arr[size]={10,20,30,40,50};

//	arr[0]:10; arr[1]:20, arr[2]:30, arr[3]:40, arr[4]:50;

	for(int i=0;i<5;i++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");
	return 0;
}

