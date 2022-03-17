#include "main.h"

/**
 * _isupper - check the code.
 * @c: Variable text
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
