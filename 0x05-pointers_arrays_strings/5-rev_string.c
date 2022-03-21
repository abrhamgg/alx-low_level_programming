#include "main.h"

/**
 * rev_string - a function that prints a string
 * in reverse.
 *
 * @s: input to above function.
 *
 * Return: void.
 */

void rev_string(char *s)
{
        int len;

        for (len = 0; s[len] != '\0'; len++)
        {
        }
        for (len = len - 1; len >= 0; len--)
        {
                _putchar(s[len]);
        }
        _putchar('\n');
}
