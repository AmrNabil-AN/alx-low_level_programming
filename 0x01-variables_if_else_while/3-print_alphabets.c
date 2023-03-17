#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints the alphabet in lowercase,
 *		then in upper case
 *
 *return : always 0 (success)
 */
	int main(void)
{
	char x = 'a';
	char y = 'A';
	
	while (x <= 'z')
	{
		putchar(x);
		++x;
	}
	while (y <= 'Z')
	{
		putchar(y);
		++y;
	}

	putchar('\n');
		return (0);
}
