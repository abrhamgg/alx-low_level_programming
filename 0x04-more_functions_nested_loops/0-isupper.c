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
		return (1);	
	}
	else
		return (0);
}
