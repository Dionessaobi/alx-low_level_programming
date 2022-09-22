#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destinatination string
 * @src: the source string
 * @n: the memory allocation
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	for ( ; c < n; c++)
	{
		dest[c] = '\0';
	}

	return (dest);
}
