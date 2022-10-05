#include "main.h"

/**
* _strlen_recursion - returns the length of a string.
* @s: the string to count
*
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
* checker - help check if function is_palindrome
* @str: the string
* @len: length of string
* @count: counter for recursion
*
* Return: 1 if string is a palindrome, 0 if it is not.
*/
int checker(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (checker(str, len - 1, count + 1));
	return (0);
}
/**
* is_palindrome - checks to see if string is palindrome
* @s: the string
*
* Return: 1 if true. O if otherwise
*/
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (checker(s, len - 1, count));
}
