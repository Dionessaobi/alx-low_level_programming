#include "main.h"

/**
 * print_binary - Prints binary representation of number
 * @n: the number being converted
 *
 * Return: 0.
 */
void print_binary(unsigned long int n)
{
	char a;

	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_binary(n >> 1);
	a = (n & 1) ? '1' : '0';
	_putchar(a);
}
