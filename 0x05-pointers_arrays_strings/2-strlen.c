#include "main.h"

/**
 * _strlen - a function that counts a string and returns
 * the number of characters.
 *
 * @s: input to the above function.
 *
 * Return: returns an int which is the number of
 * characters.
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}
	return
		_putchar(len);
}
