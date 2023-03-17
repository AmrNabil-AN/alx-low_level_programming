#include <stdio.h>

/**
 * maini- entry point
 *
 * description: print number from 0:9
 *
 * return: always 0 (success)
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
