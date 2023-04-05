#include "main.h"
/**
 * factorial - return factorial number
 * @n: intger
 * Return: always 0 (success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
		return (n * factorial(n - 1);
}
