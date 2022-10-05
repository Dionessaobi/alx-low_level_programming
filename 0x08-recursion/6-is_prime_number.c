#include "main.h"

/**
* prime_number - checks for prime number
* @a: the first integer
* @b: the 2nd integer
*
* Return: the number
*/
int prime_number(int a, int b)
{
	if (b != 1)
	{
		if (b == a)
		{
			return (1);
		}
		else if (b % a == 0 || b < 1)
		{
			return (0);
		}
		else
		{
			return (prime_number(a + 1, b));
		}
	}
	else
		return (0);
}

/**
* is_prime_number - checks if integer number is a prime number
* @n: the number to check
*
* Return: 1 if prime. Otherwise 0
*/
int is_prime_number(int n)
{
	int i = 2;

	return (prime_number(i, n));
}
