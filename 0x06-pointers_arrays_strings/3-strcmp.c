#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the 1st string
 * @s2: the 2nd string
 *
 * Return: an integer less than, equal to, or greater than
 * zero if s1 less than, equal to, or greater than s2 respectively
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			res = s1[i] - s2[i];
		}
		else if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
	}

	if (res < 0)
		return (res);
	else if (res == 0)
		return (0);
	else
		return (res);
}
