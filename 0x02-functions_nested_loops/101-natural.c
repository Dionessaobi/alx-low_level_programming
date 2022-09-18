#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: To compute and print the sum of natural numbers
 * of multiples of 3 or 5 below 1024
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int sum3, sum5, sum;
	int a;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0)
		{
			sum3 = sum3 + a;
		} else if ((a % 5) == 0)
		{
			sum5 = sum5 + a;
		}
	}
	sum = sum3 + sum5;
	printf("%d\n", sum);
	return (0);
}
