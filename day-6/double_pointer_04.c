#include<stdio.h>

int main()
{
	int a = 10;
	int *ptr = &a;
	int **ptr2 = &ptr;
	printf("Before modified: %d\n", **ptr2);
	**ptr2 = 50;
	printf("After modified: %d\n", **ptr2);

	return 0;
}


