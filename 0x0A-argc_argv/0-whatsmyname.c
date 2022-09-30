#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: number of arguments passed
 * @argv: pointer to array of strings
 *
 * Return: 0 (successful) otherwise 1
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
