#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 9 && j == 9)
			{
				printf("%d%d", i, j);
			}
			else
				printf("%d%d, ",i, j);
		}
	}
	printf("\n");

	return (0);
}
