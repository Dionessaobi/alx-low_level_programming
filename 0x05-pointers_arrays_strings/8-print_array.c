#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * followed by a new line
 * @a: the array to be checked
 * @n: the number of elements of array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i < (n - 1))
		printf("%d, ", a[i]);
		else if (i == (n - 1))
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
