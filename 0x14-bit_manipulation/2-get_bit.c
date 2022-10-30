#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index
* @n: The decimal number
* @index: The index position
*
* Return: The value of bit or -1 at error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	n = n >> index;
	return (n & 1);
}
