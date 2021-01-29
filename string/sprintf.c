#include<stdio.h>
#include<string.h>

int main()
{
	char str[30];
	int x=20;
	float y=40;
	char name[20]="sameer";

	sprintf(str,"%s %d %f", name,x,y);
	puts(str);
	return 0;
}

