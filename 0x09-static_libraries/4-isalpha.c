#include "main.h"

/**
 * _isalpha - check if the letter lower case or upper case
 * @c: charcter
 *
 * Return: 1 if the lower or upper case found
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
