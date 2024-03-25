#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to check.
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
	{
	return (n);
	}
	return (-n);
}

/**
 * _strcpy - Copies the string pointed  by src.
 * @dest: The destination buffer.
 * @src: The source string.
 * Return: A pointer to the destination  buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
	len++;
	}

	for (int i = 0; i < len; i++)
	{
	dest[i] = src[i];
	}

	dest[len] = '\0';

	return (dest);
}
