#include "main.h"

/**
 * rev_string - a function that prints a string
 * in reverse.
 *
 * @s: input to above function.
 *
 * Return: void.
 */

void rev_string(char *s)
{
    int i;
    int tmp;
    int len = 0;
    int x, n;

    for (i = 0; *(s + i) != '\0'; i++)
    {
        len++;
    }
    len = len -1;
    //printf("%d\n", len);
    for (i = 0; i < len/2; i++)
    {
        x = len - 1;
       // printf("%d", x);
        tmp = s[i];
        s[i] = s[x];
        s[x] = tmp;
    }

}
