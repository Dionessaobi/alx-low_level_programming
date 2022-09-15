#include "main.h"

/**
 * main - check the code
 *
 * Description: 'function that prints the alphabet in lowercase'
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}
