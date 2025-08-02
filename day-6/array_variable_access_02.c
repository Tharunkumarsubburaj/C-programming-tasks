#include<stdio.h>

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int *ptr = a;
	for(int i = 0; i <= sizeof(a[0]); i++)
	{
		printf("The value  is %d and address is %p\n", a[i], ptr + i);
	}

	return 0;
}

