#include<stdio.h>

void swap(int *a, int *b)
{
	int *spare = *a;
	*a = *b;
	*b = spare;
}

int main()
{
	int a = 20, b = 50;
	printf("Before swap: %d %d\n", a, b);
	swap(&a, &b);
	printf("After swap: %d %d\n", a, b);

	return 0;
}
