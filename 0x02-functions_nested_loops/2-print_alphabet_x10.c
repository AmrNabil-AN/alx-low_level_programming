#include "main.h"

/**
 * print_alphabet_x10 - print from a to z 10 times
 */

void print_alphabet_x10(void)
{
	char x;
	int ls;

	for (ls = 0; ls <= 10; ls++)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
		_putchar('\n');
	}
}


