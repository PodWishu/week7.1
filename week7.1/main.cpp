#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a;
	char x[] = " ";
	printf("wing side = ");
	scanf("%d", &a);
	for (int i = 0; i < a - 1; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("%*s", 2 * (a - 1 - i) - 1, x);
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	for (int i = 0; i < 2 * a - 1; i++)
	{
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < a - 1; i++)
	{
		for (int j = a - i - 1; j > 0; j--)
		{
			printf("*");
		}
		printf("%*s", 2 * i + 1, x);
		for (int j = a - i - 1; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}