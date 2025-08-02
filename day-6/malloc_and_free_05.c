#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 5;
	int *arr;

	arr = ( int *) malloc (n * sizeof(int));
	if(arr == NULL)
	{
		printf("Memory allocation failed");
	}
	for(int i = 0; i < n*sizeof(int); i++)
	{
		arr[i] = i + 1;
		printf("%d\n", arr[i]);
	}
	free(arr);

	return 0;
}
