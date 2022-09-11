#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: 'to print the lowercase alphabet in reverse'
 * 
 * Return: Always 0 (success)
 * /
 int main(void)
 {
    char alphabet;

    for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
    {
        putchar(alphabet);
    }
    putchar('\n');
    return (0);
 }