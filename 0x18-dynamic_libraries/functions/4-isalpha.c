#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @a: the character to be checked
 * Return: 1 if a is a letter, 0 otherwise
 */
int _isalpha(int a)
{
return ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'));
}
