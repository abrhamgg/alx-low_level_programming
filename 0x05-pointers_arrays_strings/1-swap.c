#include "main.h"
/**
 * swap_int - takes two pointer integers as input and
 * swap their value.
 *
 * @a: input 1.
 *
 * @b: input 2.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
