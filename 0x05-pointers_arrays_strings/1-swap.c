#include "main.h"

/**
 * swap_int - A function that swaps values of two integers
 * @a: the first integer pointer
 * @b: the second integer pointer
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
