#include "function_pointers.h"
#include <stdlib.h>

/**
* int_index - searches for an integer
* @array: array of integers
* @size: size of the array
* @cmp: pointer to a function
* Return: index of the 1st element or -1 if no element matches or size
* is <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 0 && size > 0 && cmp != 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
