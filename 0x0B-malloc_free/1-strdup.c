#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer
 * to a new string which is duplicate of the string str.
 * @str: input value.
 * Return: a pointer to newly allocated space in a memory.
 */

char *_strdup(char *str)
{
	int i;
	int len = strlen(str);
	char *new;

	if (str == NULL)
		return (NULL);
	new = malloc(len * sizeof(char));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		new[i] = str[i];
	}
	return (new);
}
