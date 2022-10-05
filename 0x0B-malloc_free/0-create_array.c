#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars and initializes it
* @size: the size of the array
* @c: the array name
*
* Return: Pointer to the array. NULL if size=0 or it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
