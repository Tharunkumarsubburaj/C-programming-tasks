#include<stdio.h>
int main()
{
	int i = 0, number;
	printf("Enter a number:");
	scanf("%d", &number);
	do{
		printf("The number is %d\n", i);
		i++;
	}while(i <= number);
	return 0;
}
