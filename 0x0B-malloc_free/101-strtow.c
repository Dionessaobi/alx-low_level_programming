#include "main.h"
#include <stdlib.h>

/**
* number - function to calculate number of words
* @str: string being passed to check for words
*
* Return: num of words
*/
int number(char *str)
{
	int a;
	int num = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[a] != ' ' && str[a] != '\0'; a++)
				str++;
			num++;
		}
	}
	return (num);
}

/**
* free_up - frees the memory
* @string: pointer values to be freed
* @i: counter
*/
void free_up(char **string, int i)
{
	for (; i > 0;)
		free(string[--i]);
	free(string);
}

/**
* strtow - splits a string into two words
* @str: the string
*
* Return: the result, if successful. Or NULL at failure
*/
char **strtow(char *str)
{
	int total_words = 0, b = 0, c = 0, length = 0;
	char **words, *found_word;

	total_words = number(str);
	words = malloc(sizeof(char *) * (total_words + 1));
	if (str == 0 || *str == 0 || total_words == 0 || words == 0)
		return (NULL);
	for (; *str != '\0' && b < total_words;)
	{
		if (*str == ' ')
			str++;
		else
		{
			found_word = str;
			for (; *str != ' ' && *str != '\0';)
			{
				length++;
				str++;
			}
			words[b] = malloc(sizeof(char) * (length + 1));
			if (words[b] == 0)
			{
				free_up(words, b);
				return (NULL);
			}
			while (*found_word != ' ' && *found_word != '\0')
			{
				words[b][c] = *found_word;
				found_word++;
				c++;
			}
			words[b][c] = '\0';
			b++;
			c = 0;
			length = 0;
			str++;
		}
	}
	return (words);
}
