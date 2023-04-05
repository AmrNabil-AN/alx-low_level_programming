#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: charcter
 * Return: always 0 succss)
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
