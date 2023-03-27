#include "main.h"

/**
 * _strlen - return the lenth
 * @s: pointer
 *
 * Return: 0 (success)
 */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (*(l + s) != '\0')
		l++;

	return (l);
}
