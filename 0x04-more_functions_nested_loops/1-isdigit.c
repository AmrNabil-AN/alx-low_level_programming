#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for adigit
 * @c: character
 *
 * Return: return 1 if digit and 0 if not
 */

int _isdigit(int c)
{
	int dg = c % 10;

	if ((dg >= '0') && (dg <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
