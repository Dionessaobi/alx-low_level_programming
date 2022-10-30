#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0
* @n: Pointer to a decimal
* @index: The index position
*
* Return: 1 (Success). -1 (Error).
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
