#include "main.h"
/**
 * _memcpy - copies a specific memory location
 * @dest: the stored memory
 * @src: memory where it is copied
 * @n: the total number of bytes
 *
 * Return: the copied memory n bytes that have been  changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int j = n;

for (; i < j; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
