#include <stdio.h>

/**
 * main - entry point
 *
 * description: print alphpet from z to a
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		--x;
	}
	putchar('\n');
	return (0);
}
