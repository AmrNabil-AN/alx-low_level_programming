#include "main.h"

/**
 * _islower - cheack if character lower cace or not
 * @c: the character
 * Return: 1 if the lower case found
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
