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

	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
