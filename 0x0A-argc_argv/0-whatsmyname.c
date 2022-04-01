#include "main.h"

/**
 * main - function that prints the name
 * of the program.
 * @argc: number of command line input.
 * @argv: array of inputs.
 *
 * Return: 0 success.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar (argv[0][i]);
		i++;
	}
	return (0);
}
