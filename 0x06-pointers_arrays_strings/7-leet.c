#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to the string
 *
 * Return: a string result
 */
char *leet(char *s)
{
	char c[] = "aeotl";
	char C[] = "AEOTL";
	char n[] = "43071";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if ((s[i] == c[j]) || (s[i] == C[j]))
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
