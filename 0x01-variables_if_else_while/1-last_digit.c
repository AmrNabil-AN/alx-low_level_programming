#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/* more headers goes there */
/**
 *
 * main -entry point
 *
 * Description : give me the last digital number
 *
 * Return : Always 0 (success
 *
/* betty style doc for function main goes there */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	digit = n % 10;/*gets the last digital*/
		if(digit > 5)
		{
			printf("the string %i and is greater than 5\n", digit);
		}
		else if(digit == 0)
		{
			printf("the string %i and is 0\n", digit);
		}
		else if(digit < 6 && digit != 0)
		{
			printf("the string %i and is less than 6 and not 0\n", digit);
		}
	return (0);
}
