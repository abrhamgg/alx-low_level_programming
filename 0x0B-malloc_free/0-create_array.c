#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - unction that creates an array of chars
 * , and initializes it with a specific char.
 * @size: size of the array.
 * @c: pointer.
 * Return: pointer to the first element.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size);
	if (p == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
