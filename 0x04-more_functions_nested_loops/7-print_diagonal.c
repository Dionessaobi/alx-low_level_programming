#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times it draws
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int j;
		int i;

		j = 1;
		while (j <= n)
		{
			i = 1;

			while (i <= n)
			{
				if (i == j)
					_putchar('\\');
				else if (i < j)
					_putchar(' ');
				i++;
			}
			_putchar('\n');
			j++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
