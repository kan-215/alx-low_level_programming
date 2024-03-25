#include "main.h"
/**
 * _memset - assigns a specific value  to a memory location
 * @s: the first address of the memory to fill
 * @b: specific value
 * @n:total bytes to be changed
 *
 * Return: changed array plus new value for total c bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
