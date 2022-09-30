#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argv:  argument vector
 * @argc:  argument counters
 *
 * Return: 0 (successful). otherwise 1
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
