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

        while (dest[i] != '\0')
        {
                i++;
        }
        while (src[j] != '\0')
        {
                dest[5] = src[j];
                i++;
                j++;
        }
        dest[i] = '\0';
        return (dest);
}
