#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Description: 'to print all possible combinations of three digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 55; a++)
	{
		for (b = 49; b <= 56; b++)
		{
			for  (c = 50; c <= 57; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					{
						if (a != 55 || b != 56 || c != 57)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

