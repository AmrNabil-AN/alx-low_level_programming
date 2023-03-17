#include <stdio.h>

/**
 * main- entry point
 *
 * description: print number from 0:9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		++digit;
	}
	printf("\n");
	return (0);
}
