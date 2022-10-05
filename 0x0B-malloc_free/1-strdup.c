#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns the copy of string given as parameter
* @str: pointer to the string
*
* Return: pointer to a newly allocated space in memory
*/
char *_strdup(char *str)
{
	char *p;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		j++;
	}

	p = malloc(sizeof(char) * j + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
