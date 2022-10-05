#include "main.h"

/**
* factorial - calculates the factorial of a given number
* @n: the given number
*
* Return: the factorial numbers or -1 if error
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
	return (n * factorial(n - 1));
}
