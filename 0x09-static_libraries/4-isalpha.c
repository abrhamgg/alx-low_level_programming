#include "main.h"

/**
 *_isalpha - check if the input and
 *returns 1 if its an alphabet , 0 otherwise.
 *
 * @c: The character in ASCII code
 *
 *Return: 1 for letters. Returns 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n');
}
