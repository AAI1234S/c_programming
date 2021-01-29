#include<stdio.h>
#include<stdlib.h>
#define ROW 10
#define COL 15
int main()
{

	char arr[ROW][COL]={ "Hello",
			"HI",
			"HELLO",
			"DREAM",
			"SAINATH",
			"WORK",
			"NICE",
			"DONE",
			"WHAT U DONE"};

	/* print character by character */

	int i=0,j=0;

	printf("UR array:\n");
	for(i=0;i<ROW;i++)
	{
	/*	for(j=0;j<COL;j++)
		{
			printf("%2c",arr[i][j]);
		}*/
	printf("%s",arr[i]);
	printf("\n");

	}

	strcpy(arr[0],"MY DREAM");
	strcpy(arr[4], arr[5]);
	puts(arr[0]);
	puts(arr[4]);

	return 0;
}

