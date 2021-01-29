#include<stdio.h>
#include<string.h>
#define row 5
#define col 30

int main( )
{
	char arr[row][col];
	int i,j;
	char temp[20];
	printf("Enter the %d String:",row);

	for(i=0;i<row;i++)
		scanf("%s",arr[i]);
	printf("Befor Sorting:\n");
	for(i=0;i<row;i++)
		printf("%s\n",arr[i]);

	printf("after swap:\n");
	for(i=0;i<row;i++)
	{
		for(j=i+1;j<row;j++)
		{
		strcpy(temp,arr[i]);
		strcpy(arr[i],arr[j]);
		strcpy(arr[j],temp);
		}
	}
	printf("After sorting:\n");
	for(i=0;i<row;i++)
	{
		for(j=i+1;j<row;j++)
			if(strcmp(arr[i],arr[j])>0)
			{
			strcpy(temp,arr[i]);
			strcpy(arr[i],arr[j]);
			strcpy(arr[j],temp);
			}
	}
	
	for(i=0;i<row;i++)
		puts(arr[i]);
	return 0;
}


	

