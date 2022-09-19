#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description: to print the largest prime factor of a number
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int n = 612852475143, m = 0;
	long int i;

	for (i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			m = 1;
			while (n % i == 0)
			{
				n /= i;
			}
		}
	}

	if (n > 1)
	{
		m = n;
	}
	printf("%ld\n", m);

	return (0);
}
