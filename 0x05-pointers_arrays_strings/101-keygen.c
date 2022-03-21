#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random passwords
 * for program crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int N = rand() % 25;
	char *Letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *Number = "123456789";
	char *symbol = "!@#$^&*?";
	char *letter = "abcdefghijklmnopqrstuvwxyz";
	int randomizer = rand() % 4;
	char password[50];

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1) 
		{
			password[i] = Number[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2) 
		{
			password[i] = symbol[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);	
		}
		else if (randomizer == 3) 
		{
			password[i] = Letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else 
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		return 0
	}
}
