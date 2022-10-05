#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all arguments of my program
* @ac: the argument count
* @av: the argument array
*
* Return: the concatenated result
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *p;

	if (ac == 0 || av == 0)
		return (NULL);

	i = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
			i++;
		i++;
	}
	i++;

	p = malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	l = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			p[l++] = av[j][k];
		}
		p[l++] = '\n';
	}
	p[l] = '\0';

	return (p);
}
