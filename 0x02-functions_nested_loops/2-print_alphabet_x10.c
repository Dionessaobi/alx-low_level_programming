#include "main.h"

/**
 * print_alphabet_10x - function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_10x(void)
{
	char c, i;

	for (i = 10; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
