#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the sum of even valued terms of fibonacci sequence
 * whose values do not exceed 4000000
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int a = 1, b = 2;
	unsigned long int next;
	unsigned long int even_sum = 0;


	for (i = 1; i <= 33; ++i)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			even_sum = even_sum + a;
		}
		next = a + b;
		a = b;
		b = next;
	}
	printf("%lu\n", even_sum);
	return (0);
}
