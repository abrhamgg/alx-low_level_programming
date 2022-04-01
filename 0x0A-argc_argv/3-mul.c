#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies to numbers.
 * @argc: no of argument.
 * @argv: array of argumnets.
 * Return: 0 if succesful.
 * atoi converts string to int.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int first = atoi(argv[1]);
		int second = atoi(argv[2]);
		int result = first * second;

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
