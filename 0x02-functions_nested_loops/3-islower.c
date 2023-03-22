#include "main.h"

/**
 * int _islower(int c) - cheack if character lower cace or not
 *
 * return: always 0 (success)
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
