#include <stdio.h>

/**
 * main - entry point
 *
 * descrption: prints alphabet in lower case
 *
 * Return: Always 0 (success)
 *
 */

	int main(void)
{
	char x= 'a';

	while (x <= 'z')
	{
		putchar(x);
		++x;
	}
	putchar('\n');

	return (0);
}
