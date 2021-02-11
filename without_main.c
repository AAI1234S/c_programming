#include<stdio.h>

void fun()
{
	printf("Main not incuded please mention compile time cc -nostartfiles prog_name\n");

	fun1();
	fun2();
	exit(0);
}

void fun1()
{
	printf("Fun1 called from fun\n");
}

void fun2()
{
	printf("Fun2 called from fun\n");
}

