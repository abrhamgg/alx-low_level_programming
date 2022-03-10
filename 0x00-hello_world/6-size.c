#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int inttype;
	float floattype;
	long int longint;
	long long int longlong;
	char chartype;

	printf("Size of a char: %zu bytes(s)\n", sizeof(chartype));
	printf("Size of an int: %zu bytes(s)\n", sizeof(inttype));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(longint));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(longlong));
	printf("Size of a float: %zu bytes(s)\n", sizeof(floattype));
    	
	return (0);
}
