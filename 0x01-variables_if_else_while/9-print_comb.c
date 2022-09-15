#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'to print all possible
 * combinations of single digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int a;

for (a = 48; a < 58; a++)
{
putchar(a);
if (a != 57)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}
