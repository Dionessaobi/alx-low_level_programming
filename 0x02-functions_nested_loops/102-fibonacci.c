#include <stdio.h>

/**
 * main - Entry point
 *
 * To print the first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count = 3;
	long int a = 1, b = 2;
	long int next = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", next);
		} else if (count < 50)
		{
			printf("%lu, ", next);
		}
		a = b;
		b = next;
		next = a + b;
		count++;
	}
	return (0);
}
