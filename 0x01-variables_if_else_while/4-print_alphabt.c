#include <stdio.h>

/**
 * main - entry point
 *
 * description: print alphapet expet e and q
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
	if (x == 'e' || x == 'q')
	{
		++x;
	}
		putchar(x);
		++x;
	}
	putchar('\n');

	return (0);
}
