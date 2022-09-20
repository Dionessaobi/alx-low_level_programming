#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the pointer to the string
 */
void rev_string(char *s)
{
	char tmp;
	int i;
	int len = 0;
	int len2 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len2 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2--] = tmp;
	}
}
