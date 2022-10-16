#include "variadic_functions.h"

/**
* sum_them_all - Adds all its parameters
* @n: the number of arguments
*
* Return: The result or 0 when n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int s = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (i = 0; i < n; i++)
		s += va_arg(list, int);

	va_end(list);
	return (s);
}
