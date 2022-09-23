#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string under consideration
 *
 * Return: capitalized result
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		j = 0;
		while (c[j] != '\0')
		{
			if (c[j] == str[i] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] = str[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (str);
}
