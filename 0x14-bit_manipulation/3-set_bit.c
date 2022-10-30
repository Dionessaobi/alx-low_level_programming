#include "main.h"

/**
* set_bit - Sets the value of a bit to 1
* @n: Pointer to a decimal
* @index: The index
*
* Return: 1 (Success). -1 (Error).
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int changenum = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	changenum <<= index;
	*n = *n | changenum;
	return (1);
}
