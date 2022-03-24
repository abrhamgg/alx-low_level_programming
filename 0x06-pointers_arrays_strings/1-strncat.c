#include "main.h"

/**
 * _strncat - function that concatenates
 * two strings.
 *
 * @dest: input value.
 * @src: input value.
 * @n: input value.
 *
 * Return: a pointer to first char of
 * dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int len = 0;
	while (dest[i] != '\0')
	{
		i++;
		len++;
	}
	for (j = 0; j < n; j++)
	{
		dest[len + j] = src[j];
	}
	dest[len + n] = '\0';
	return (dest);
}
