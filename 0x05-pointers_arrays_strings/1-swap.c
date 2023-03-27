#include "main.h"

/**
 * swap_int - give the swaps of towe numbers
 * @a: pointer
 * @b: pointer
 *
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int ls;

	ls = *a;
	*a = *b;
	*b = ls;
}
