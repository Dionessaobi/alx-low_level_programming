#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings while allocating memory
 * @dest: the first string
 * @src: the secod string
 * @n: the memory size
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int b;
	int dest_len = strlen(dest);

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[dest_len + b] = src[b];
	}
	dest[dest_len + b] = '\0';

	return (dest);
}
