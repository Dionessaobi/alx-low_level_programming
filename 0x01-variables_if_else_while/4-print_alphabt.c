#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: 'the program's description'
 * 
 * Return: Always 0 (success)
 */
 int main(void)
{
char ch;
for (ch != 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
    putchar(ch);
}
}
putchar('\n);
return (0);
}
