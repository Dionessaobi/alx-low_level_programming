#include "main.h"

/**
* square_root - finds the natural square root of a number
* @i: the integer
* @j: 2nd integer
*
* Return: the number found
*/
int square_root(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (square_root(i + 1, j));
	}
}

/**
* _sqrt_recursion - finds the natural square root of a number
* @n: the integer
*
* Return: the square root or -1 if non
*/
int _sqrt_recursion(int n)
{
	int k = 1;

	return (square_root(k, n));
}
