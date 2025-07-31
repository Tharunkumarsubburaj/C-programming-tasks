#include<stdio.h>
#include<string.h>

int main()
{
	char a[] = "hihello", b[100];
	strcpy(b, a);
	printf("The string a is %s\n", a);
	printf("The string b is %s\n", b);

	return 0;
}
