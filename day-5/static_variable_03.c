#include<stdio.h>

void display()
{
	static int a = 5;
	printf("The current value is %d\n", a);
	a++;
	printf("The updated value is %d\n", a);
}

int main()
{
	display();
	display();

	return 0;
}
