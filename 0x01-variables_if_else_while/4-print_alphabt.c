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
    char lower_alphabet = 'a';

    while (alphabet <= 'z')
    {
        if (alphabet != 'e' && alphabet != 'q')
        putchar(alphabet);
        alphabet++;
    }
    putchar('\n);
    return (0);
 }