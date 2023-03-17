#include <stdio.h>

/**
 * main - entry point
 *
 * description: print from 0 : 9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++x;
	}
	putchar('\n');

	return (0);
}
