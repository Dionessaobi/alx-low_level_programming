#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: To print numbers 1 to 100
 * Fizz-Buzz test origin
 *
 * Return: 0 (success)
 */
int main(void)
{
	int j;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	j = 1;
	while (j <= 100)
	{
		if (j % 3 == 0 && j % 5 != 0)
		{
			printf(" %s", f);
		}
		else if (j % 5 == 0 && j % 3 != 0)
		{
			printf(" %s", b);
		}
		else if (j % 3 == 0 && j % 5 == 0)
		{
			printf(" %s", fb);
		}
		else if (j == 1)
		{
			printf("%d", j);
		}
		else
		{
		printf(" %d", j);
		}
		j++;
	}
	printf("\n");

	return (0);
}
