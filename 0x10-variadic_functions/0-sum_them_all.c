#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments.
 * @...: ellipsis.
 * Return: sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
