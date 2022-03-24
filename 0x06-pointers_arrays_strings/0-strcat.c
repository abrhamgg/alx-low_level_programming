#include "main.h"

/**
 * _strcat - function that concatenates
 * two strings.
 *
 * @src: input value.
 *
 * @dest: input value.
 *
 * Return: pointer to first char of
 * dest string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len + j] = src[j];
	}
	dest[len + j] = '\0';
	return (dest);
}
