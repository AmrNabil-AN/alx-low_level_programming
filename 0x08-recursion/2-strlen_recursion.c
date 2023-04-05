#include "main.h"

/**
 * _strlen_recursion - print the lenth of string
 * @s: charcter
 * Return: always 0 (success)
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')
	{
		len += _strlen_recursion(s + 1) + 1;
	}

	return (len);
}
