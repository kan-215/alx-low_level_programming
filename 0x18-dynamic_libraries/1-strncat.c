#include "main.h"

/**
 * _strncat - a function to concatenate two strings using at most m bytes
 * @dest: input vaue
 * @src : input value
 * @m: input value
 *
 *Return: dest
 */

char *_strncat(char *dest, char *src, int m)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < m && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
