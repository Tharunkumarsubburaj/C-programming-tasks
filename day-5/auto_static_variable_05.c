#include<stdio.h>

void auto_variable()
{
	auto int a = 10;
	printf("The auto variable is %d\n", a);
	a += 2;
}

void static_variable()
{
	static int b = 20;
	printf("The static variable is %d\n", b);
	b += 2;
}


int main()
{
	auto_variable();
	auto_variable();
	auto_variable();
	static_variable();
        static_variable();
        static_variable();
	
	return 0;
}
