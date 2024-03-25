#include "main.h"
/**
 * _strncpy -function to copy a string
 * @dest: input value
 * @src: input value
 * @m: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int m)
{
int a;

a = 0;
while (a < m && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
while (a < m)
{
dest[a] = '\0';
a++;
}
return (dest);
}
