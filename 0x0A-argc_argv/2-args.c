#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the arguments passed into it
 * @argv:  argument vector
 * @argc:  argument counters
 *
 * Return: 0 (successful). otherwise 1
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
