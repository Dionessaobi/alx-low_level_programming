#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the pointer to the string to be encoded
 *
 * Return: the encoded string
 */
char *rot13(char *str)
{
	char c1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c1[j] != '\0'; j++)
		{
			if (str[i] == c1[j])
			{
				str[i] = c2[j];
				break;
			}
		}
	}
	return (str);
}
