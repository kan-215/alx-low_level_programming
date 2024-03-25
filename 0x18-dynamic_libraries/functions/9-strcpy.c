#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 * @dest: The destination buffer.
 * @src: The source string.
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int j = 0;

while (*(src + i) != '\0')
{
i++;
}

for (; j < i; j++)
{
dest[j] = src[j];
}

dest[i] = '\0';

return (dest);
}
