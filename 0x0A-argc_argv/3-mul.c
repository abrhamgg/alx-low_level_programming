#include <stdio.h>

/**
 * main - function that multiplies to numbers.
 * @argc: no of argument.
 * @argv: array of argumnets.
 * Return: 0 if succesful.
 */

int myAtoi(char *str)
{
	int res = 0;
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		res = res * 10 + str[i] - '0';
		return res;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int first = myAtoi(argv[1]);
		int second = myAtoi(argv[2]);
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
