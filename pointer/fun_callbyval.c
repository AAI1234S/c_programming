#include<stdio.h>
#include<stdlib.h>
void fun(int a, int b);
int main()
{
	int num1, num2;

	printf("Enter a num1 and num2 value:\n");
	scanf("%d %d",&num1,&num2);

	fun(num1, num2);   //passig a actual value

	printf("After pass\n");
	printf("num1=%d num2=%d\n",num1, num2);

	return 0;
}

void fun(int a, int b)    //recived the actual argument into  a,b, element(this is new variable)
{
	a++;
	b++;

	printf("in fun : num1= %d num2=%d\n",a,b);
}

