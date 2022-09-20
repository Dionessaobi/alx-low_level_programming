#include "main.h"

/**
 * puts_half - prints the 2nd half of the string
 * followed by a new line
 * @str: the string to be checked
 */
void puts_half(char *str)
{
	int i, m, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	m = i + 1;
	if (m % 2 == 0)
	{
		n = m / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (m - 1) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}

	_putchar('\n');
}
