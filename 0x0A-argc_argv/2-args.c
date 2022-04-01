#include <stdio.h>

/**
 * main - function that prints every argumetns it
 * receives.
 * @argc: no of arguments.
 * @argv: array of arguments passed.
 * Return: 0 Success.
 */

int main(int argc, char *argv[])
{
	int i = 0;
	argc = argc;
	
	while (*argv[i] != '\0')
	{
		printf("%s\n",*(argv + i));
		i++;
	}
	if (*argv[i] == '\0')
		return (0);
	return (0);
}
