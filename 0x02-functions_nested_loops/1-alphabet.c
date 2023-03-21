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
char ls;

for (ls = 'a'; ls <= 'z'; ls++)
_putchar(ls);

_putchar('\n');
}
