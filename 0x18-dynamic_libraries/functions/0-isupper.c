#include "main.h"

/**
 * _isupper - this checks the presence of uppercase letters
 * @n: the character to be checked for uppercase
 *
 * Return: return 1 if uppercase, otherwise return 0
 */
int _isupper(int n)
{
	if (n >= 'A' && n <= 'Z')
		return (1);
	return (0);
}
