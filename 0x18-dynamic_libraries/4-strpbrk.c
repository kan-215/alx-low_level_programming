#include "main.h"

/**
 * _strpbrk - Entry point of the program
 * @s: input1
 * @accept: input2
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}

return ('\0');
}
