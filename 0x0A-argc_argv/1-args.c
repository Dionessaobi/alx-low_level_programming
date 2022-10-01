#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
