#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];

	strncpy(str,"deepali",4);
	puts(str);	//if source stirng is larger then must add \0

	strncpy(str,"ganesh",3);
	str[3]='\0';
	puts(str);
	strncpy(str,"ramesh",7);
	puts(str);

	return 0;
}


