#include "main.h"
/**
 * is_prime_number - print prime number
 * @n: intger
 * @x: intger
 * Return: always 0 (succrss)
 */
int check_prime(int n, int x);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - check if number is prime or not
 * @n: intger
 * @x: intger
 * Return: always 0 (success)
 */
int check_prime(int n, int x)
{
	if (x >= n && n > 1)
	{
		return (1);
	}
	else if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, x + 1));
	}
}
