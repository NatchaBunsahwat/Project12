#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n;

	printf("Input an integer\n");
	scanf("%d", &n);

	n % 2 == 0 ? printf("Even\n") : printf("Odd\n");

	return 0;
}