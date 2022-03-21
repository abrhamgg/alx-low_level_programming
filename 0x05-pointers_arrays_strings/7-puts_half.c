#include "main.h"

/**
 * puts_half - function that print
 * the second half of the string.
 *
 * @str: input to the above function.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int i;
	int len = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		len++;
	}
	if (len % 2 != 0)
	{
		int n = (len - 1) / 2;

		for (i = n; i < len; i++)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	}
	else
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	}
}
