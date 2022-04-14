#include <stdio.h>
#include "vardiac_functions.h"
#include <stdarg.h>

/**
 * print_strings - functions that prints strings.
 * @separator: symbol to be printed between strings.
 * @n: no of parameters.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i, j, k;
	va_list ptr;
	char *string;

	va_start(ptr, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			string = va_arg(ptr, char*);
			if (string == NULL)
				printf("(nill)");
			printf("%s", string);
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			string = va_arg(ptr, char*);
			if (string == NULL)
				printf("(nil)");
			printf("%s", string);
			if (i < (n - 1))
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(ptr);
}
