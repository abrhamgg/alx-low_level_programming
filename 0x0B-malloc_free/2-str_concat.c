#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - function that concatenates
 * two strings.
 * @s1: input value.
 * @s2: input value.
 * Return: pointer to newly allocated space.
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	char *add;

	if (s1 == NULL)
	{
		i = 0;
	}
	if (s2 == NULL)
		j = 0;
	i = strlen(s1);
	j = strlen(s2);
	add = malloc((i + j) * sizeof(char));
	for (k = 0; k < (i + j); k++)
	{
		if (k < i)
			add[k] = s1[k];
		else
			add[k] = s2[k - i];
	}
	return (add);
}
