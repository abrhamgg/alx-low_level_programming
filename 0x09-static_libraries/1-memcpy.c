#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * @dest: memory where is stored
 * @src: memory to be copied.
 * @n: number of bytes.
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
