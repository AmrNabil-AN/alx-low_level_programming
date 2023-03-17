#include <stdio.h>

/**
 * main - entry point
 *
 * description: print digit number from 0:9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
			++digit;
	}
	putchar('\n');
	return (0);
}
