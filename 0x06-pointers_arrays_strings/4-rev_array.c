#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int aux[100];
	int i;

	for (i = 0; i < n; i++)
	{
		aux[n - 1 - i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = aux[i];
	}
}
