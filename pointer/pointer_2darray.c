#include<stdio.h>
#include<stdlib.h>
#define row 3
#define col 3

int main()
{
	int arr[row][col];

	int (*ptr)[col];

	printf("enter the %d element\n", row*col);
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			scanf(" %d ",&arr[i][j]);

	for(int i=0;i<row;i++)
	{
		printf("Address of %dth array =%p  %p\n",i, arr[i], *(ptr+i));
		for(int j=0;j<col;j++)
		{
			printf("%2d %2d",arr[i][j], *(*(arr+i)+j));
		}
	printf("\n");
	}
return 0;
}

