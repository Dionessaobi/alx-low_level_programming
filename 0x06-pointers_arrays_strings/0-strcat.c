#include "main.h"
#include <string.h>

/**
 * _strcat - appends src string to dest string
 * overwriting the terminating null byte of dest and adds a new null byte
 * @dest: pointer to the first string
 * @src: pointer to the 2nd string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int a;

	for (a = 0 ; src[a] != '\0' ; a++)
	{
		dest[dest_len + a] = src[a];
	}

	dest[dest_len + a] = '\0';

	return (dest);
}
