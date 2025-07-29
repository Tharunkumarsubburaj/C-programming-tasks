#include<stdio.h>

void square(int num)
{
	int square = num * num;
	display(square, num);
}

void display(int result, int value)
{
	printf("The square of %d is %d\n", value, result);
}

int main()
{
	int num;
	printf("Enter the number to square:");
	scanf("%d", &num);
	square(num);
}
