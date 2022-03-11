#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
{
	char c;
	for (c = 'a'; c < 'e'; c++)
		putchar(c);
	for (c = 'f'; c < 'q'; c++)
		putchar(c);
	for (c = 'r'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
