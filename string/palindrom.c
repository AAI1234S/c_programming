#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,j;

	printf("Enter the string:");
	scanf("%s",str);

	for(i=0,j=strlen(str)-1;i<=j;++i,--j)
	{
		if(str[i]!=str[j])
			break;
		printf("i=%d, j=%d\n",i,j);
	}
	/*for(i=0;i==0;i++)
	{
		printf("Once \n");
	}*/


	if(i>j)
		printf("Palindrom\n");
	else
		printf("Non-Palindrom\n");

	return 0;
}


