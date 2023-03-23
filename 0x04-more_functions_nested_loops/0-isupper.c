#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if the charcter upper case
 * @c: charcter
 *
 * Return: 1 if true and 0 if not
 */

int _isupper(int c)
{

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
