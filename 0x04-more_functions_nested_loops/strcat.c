#include <stdio.h>
#include <string.h>

char * _strcat(char *dest, const char *src)
{
    int i;
    int j;

    i=0;
    while(dest[i] != '\0')
    {
        i++;
    }
    j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;

int main(void)
{
    char *s1 = "hello";
    char *s2 = " world";
    _strcat(s1, s2);
}
