#include<stdio.h>

int main()
{
        int numbers[5] = {1, 2, 3, 4, 5};
	int sum;
        for(int i = 0; i <= 4; i++)
        {
                sum += numbers[i];
        }
	printf("The sum is %d\n", sum);

        return 0;
}

