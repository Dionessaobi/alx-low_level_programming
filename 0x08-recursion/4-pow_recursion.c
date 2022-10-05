#include "main.h"

/**
* _pow_recursion - calculates the value of x raised to y
* @x: the first integer
* @y: the second integer
*
* Return: the value of x raised to y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
