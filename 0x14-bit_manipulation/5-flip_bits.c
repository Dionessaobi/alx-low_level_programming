#include "main.h"

/**
* flip_bits - Gets the number of bits and flips
* @n: The decimal num to be flipped
* @m: The num to be flipped to
*
* Return: Number of bits flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index = 0;
	unsigned long int a;

	a = n ^ m;
	while (a != 0)
	{
		if ((a & 1) == 1)
			index++;
		a = a >> 1;
	}
	return (index);
}
