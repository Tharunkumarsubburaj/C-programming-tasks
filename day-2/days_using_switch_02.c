#include<stdio.h>

int main()
{
	int num;
	printf("enter a number(1-7):");
	scanf("%d", &num);
	switch (num) {
	       	case 1:
			printf("Day: Monday\n");
			break;
		case 2:
			printf("Day: Tuesday\n");
			break;
		case 3:
			printf("Day: Wednesday\n");
			break;
		case 4:
			printf("Day: Thursday\n");
			break;
		case 5:
			printf("Day: Friday\n");
			break;
		case 6:
			printf("Day: Saturday\n");
			break;
		case 7:
			printf("Day: Sunday\n");
			break;
		default:
			printf("Invalid Input\n");
	
	}


	return 0;
}
