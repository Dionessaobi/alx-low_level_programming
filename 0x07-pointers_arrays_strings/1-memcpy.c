#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: address to copy the memory to
 * @src: memory area to copy from
 * @n: number of bytes
 *
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
	{
		dest[b] = src[b];
	}

	return (dest);
}
