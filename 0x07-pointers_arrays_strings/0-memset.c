#include "main.h"

/**
 * _memset - function that fills a
 * memory with a constant byte.
 *
 * @s: input value.
 * @b: inbut value.
 * @n: input value.
 *
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	char *p = s;

	for (i = 0; *(s + i) < n; i++)
	{
		*(s + i) = b;
	}
	return(p);
}
