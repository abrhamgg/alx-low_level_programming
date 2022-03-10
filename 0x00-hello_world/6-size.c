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
	long long longlong;
	char chartype;

	printf("Size of a char: %zu bytes(s)", sizeof(chartype));
	printf("Size of an int: %zu bytes(s)", sizeof(inttype));
	printf("Size of a long int: %zu bytes(s)", sizeof(longint));
	printf("Size of a long long: %zu bytes(s)", sizeof(longlong));
	printf("Size of a float: %zu bytes(s)", sizeof(floattype));
    	
	return (0);
}
