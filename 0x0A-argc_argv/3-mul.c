#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success). or 1, error
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int b = 1, mul;

	if (argc == 3)
	{
		mul = atoi(argv[b]) * atoi(argv[b + 1]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
