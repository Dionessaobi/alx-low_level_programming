#include "main.h"

/**
 * puts2 - prints out one of first two characters of a string
 * followed by a new line
 * @str: the string to be checked
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i;
		while (j % 2 == 0)
		{
			_putchar(str[i]);
			j++;
		}
		i++;

	}

	_putchar('\n');
}
