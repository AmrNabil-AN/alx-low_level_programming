#include "main.h"

/**
 * more_numbers - print more numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	char c;

	for (c = '0'; c <= '10'; c++)
	{
		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
