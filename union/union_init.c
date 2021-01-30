#include<stdio.h>
#include<string.h>
union Dispention
{
	int cnt;
	char material[20];
	float quantity;
};

int main()
{
	union Dispention obj1;

	obj1.cnt=1;
	printf("Cnt=%d\n",obj1.cnt);
	strcpy(obj1.material,"Not Allowed");
	printf("%s\n",obj1.material);
	obj1.quantity=12.3;
	obj1.quantity=23.9;
	printf("%.2f\n",obj1.quantity);
	printf("sizeof union:%ld=%ld\n",sizeof(obj1),sizeof(union Dispention));

	return 0;
}

