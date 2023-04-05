#include "main.h"

/**
 * _sqrt_recursion - return the natural square number
 * @n: intger
 * Return: always 0 sucess
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1))
}

/**
 * square - return value
 * @n: intger
 * @val: valuo
 * Return: always 0 (success)
 */

int square(int n, int val)
{
	if (vla * val == n)
	{
		return (val);
	}
	if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
