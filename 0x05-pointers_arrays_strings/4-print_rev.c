#include "main.h"

/**
 * print_rev - print string revese
 * @s: string
 *
 * Return: 0 (success)
 *
 */
void print_rev(char *s)
{
	int l;

	l = 0;
	while (*(s + l) != '\0')
		l++;
	l--;
	for (; 1 >= 0; l--)
		_putchar(*(s + l));
	_putchar('\n');
}
