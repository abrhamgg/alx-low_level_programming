#include "main.h"

/**
 * main - check the code.
 *
 * Return: check the letter and return 1 if its uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar('1');	
	}
	else
		_putchar('0');

	return (0);
}
