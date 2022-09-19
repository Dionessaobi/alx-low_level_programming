#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 followed ny a new line
 */
void print_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
