#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
* op_add - Adds two integers
* @a: 1st number
* @b: 2nd number
*
* Return: The sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Substracts two integers
* @a: 1st integer
* @b: 2nd integer
*
* Return: The difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Multiplies two integers
* @a: 1st integer
* @b: 2nd integer
*
* Return: The product
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Divides between 2 integers
* @a: 1st integers
* @b: 2nd integers
*
* Return: The result of the division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - Provides remainder between 2 integers
* @a: 1st integer
* @b: 2nd integer
*
* Return: The remainder
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
