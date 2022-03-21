#include "main.h"

/**
 * _puts - a function that counts a string and returns
 * the number of characters.
 *
 * @s: input to the above function.
 *
 * Return: returns an int which is the number of
 * characters.
 */

void _puts(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		_putchar(*(s + i));	
	}
	_putchar('\n');
}

