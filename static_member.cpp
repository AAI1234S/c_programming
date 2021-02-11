#include<iostream>
class test
{
	static int a;

	public:
	static int b;

	static void static_access(void)
	{
		a=20;
		std::cout<<"a="<<a<<std::endl;
		b=30;
		std::cout<<"b="<<b<<std::endl;
	}

	void non_static(void)
	{
		a=10;
		std::cout<<"a="<<a<<std::endl;
		b=5;
		std::cout<<"b="<<b<<std::endl;
	}
};

int test::a=0;
int test :: b=0;

int main()
{
	test obj;
	test ::a=20;
	test ::b=60;
	obj.static_access();
	obj.non_static();
	return 0;
}




