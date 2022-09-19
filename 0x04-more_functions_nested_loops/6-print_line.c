#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character prints
 */
void print_line(int n)
{
	if (n > 0)
	{
		int j;

		j = 1;
		while (j <= n)
		{
			_putchar('_');
			j++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
