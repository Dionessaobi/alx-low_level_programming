#include "main.h"

/**
 * times_table - Print the 9 times table, starting with 0
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 0; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 0; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 0)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
