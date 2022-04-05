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
	if (size == 0)
	{
		return (NULL);
	}
	char *p = malloc(size);
	for (i == 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
