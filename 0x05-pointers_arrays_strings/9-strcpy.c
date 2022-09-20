#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: the buffer to be copied to
 * @src: the buffer to be copied from
 *
 * Return: dest if true
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
