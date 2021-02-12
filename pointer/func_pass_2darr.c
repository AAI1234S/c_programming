#include<stdio.h>
#include<stdlib.h>

void fun(int (*ptr)[3])
{
	int i=0,j=0;
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			ptr[i][j]=ptr[i][j]+3;
}


int main()
{
	int arr[2][3]={{1,2,3},{10,20,30}};
	int i,j;
	fun(arr);

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

