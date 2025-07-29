#include<stdio.h>

int factorial(int num)
{
	if(num <= 1)
	{
		return 1;
	}
	else
	{
		return num * factorial(num - 1);
	}
}


int main()
{
	int num = 5;
	int result = factorial(num);
	printf("Factorial of %d is %d\n", num, result);

	return 0;
}
