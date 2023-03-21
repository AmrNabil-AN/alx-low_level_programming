#include "main.h"

/**
 * main - entry point
 *
 * description: Write a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
		char x;

		for (x = 'a'; x <= 'z'; x++)
		{
		_putchar(x);
		}

		_putchar('\n');

		return (0);
}
