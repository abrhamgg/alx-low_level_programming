#include "main.h"

/**
 *_islower.c - checks the input and returns 1 if its lowercase , 0 otherwise
 *
 * @c: the character in ASCII code.
 *
 * Return: 1 for lowercase. 0 for the rest.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n');
}