#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that all its parameters.
 * @separator: string to be printed betweem numbers.
 * @n: no of numbers.
 * @...: all parameters.
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ptr, int));
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
				printf("%d", va_arg(ptr, int));
			else
				printf("%d%s", va_arg(ptr, int), separator);
		}
		printf("\n");
	}
	va_end(ptr);
}
